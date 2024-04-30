import matplotlib.gridspec as gridspec
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
import math
import scipy.stats as stats
import pandas as pd

def calculate_confidence_limits(confidence_level, observations=None, dof=None, mean=None, se=None):
    if(observations is None):
        return stats.t.interval(confidence_level, dof, mean, se)
    else:
        return stats.t.interval(confidence_level, len(observations)-1, np.mean(observations), stats.sem(observations)) 

def hist_normal(df, bins):
    for column in df.columns:
        fig = plt.figure(figsize=(20, 10))

        if(not pd.to_numeric(df[column], errors='coerce').notnull().all()):
            print(f"Not numerical: {column} \n")
            continue
        
        mean = df[column].mean()
        std = math.sqrt((((df[column]-df[column].mean())**2).sum())/(len(df)))

        x = np.linspace(df[column].min(), df[column].max(), 100)
        y = stats.norm.pdf(x, mean, std)

        def format_axes(fig):
            for i, ax in enumerate(fig.axes):
                ax.text(0.5, 0.5, "ax%d" % (i+1), va="center", ha="center")
                ax.tick_params(labelbottom=False, labelleft=False)

        gs0 = gridspec.GridSpec(1, 3, figure=fig)

        gs00 = gridspec.GridSpecFromSubplotSpec(3, 3, subplot_spec=gs0[0])

        ax1 = fig.add_subplot(gs00[:1, :])
        sns.boxplot(df[column], orient='h', ax=ax1)
        ax1.set_xlabel('')

        ax2 = fig.add_subplot(gs00[1:, :])
        sns.histplot(df[column], kde=True, ax=ax2, bins=bins)
        ax2.set_xlabel('')

        gs01 = gs0[1].subgridspec(3, 3)

        ax3 = fig.add_subplot(gs01[:1, :])
        sns.boxplot(df[column], orient='h', ax=ax3)
        ax3.set_xlabel('')

        ax4 = fig.add_subplot(gs01[1:, :])
        sns.histplot(df[column], kde=True, stat="density", ax=ax4)
        ax4.set_xlabel('')

        gs02 = gs0[2].subgridspec(3, 3)

        ax5 = fig.add_subplot(gs02[:1, :])
        sns.boxplot(df[column], orient='h', ax=ax5, color='b')
        plt.axvline(mean,color='r', linestyle='-', label=f'Mean {mean:.2f}')
        ax5.set_xlabel('')

        ax6 = fig.add_subplot(gs02[1:, :])
        sns.lineplot(x=x, y=y, ax=ax6)
        sns.histplot(df[column], stat="density", ax=ax6, alpha=0.1)
        plt.axvline(mean,color='r', linestyle='-', label=f'Mean {mean:.2f}')
        plt.axvline(mean+std,color='b', linestyle='-.', label=f'+σ {std:.2f}')
        plt.axvline(mean-std,color='b', linestyle='-.', label=f'-σ {std:.2f}')
        
        plt.fill_between(x, y, where=(x >= mean - std) & (x <= mean + std), alpha=0.5, color='b')
        plt.fill_between(x, y, where=(x >= mean - 2*std) & (x <= mean - 1*std), alpha=0.3, color='green')
        plt.fill_between(x, y, where=(x >= mean + 1*std) & (x <= mean + 2*std), alpha=0.3, color='green')
        plt.fill_between(x, y, where=(x >= mean - 3*std) & (x <= mean - 2*std), alpha=0.3, color='yellow')
        plt.fill_between(x, y, where=(x >= mean + 2*std) & (x <= mean + 3*std), alpha=0.3, color='yellow')
        plt.legend()
        ax6.set_xlabel('')

        # the following syntax does the same as the GridSpecFromSubplotSpec call above:
        plt.suptitle(f"{column}")
        #format_axes(fig)

def normal_sampling_dist(df, sample_size, num_samples, bins, is_sampling_dist_shown, is_exact_standard_error_shown, seed):   
    for column in df.columns:
        #if(not pd.to_numeric(df[column], errors='coerce').notnull().all()):
        #    print(f"Not numerical: {column} \n")
        #    continue
        #
        df_samples = pd.DataFrame()
        for i in range(num_samples):
            df_samples[f's{i}'] = df[column].sample(sample_size, random_state=seed+i, ignore_index=True, replace=True)

        if(num_samples>1):
            df_samples_mean = df_samples.mean(axis=0)
        else:
            df_samples_mean = df_samples.iloc[:, 0]
        

        fig = plt.figure(figsize=(20, 15))

        smallest_x_diff = abs(df[column].min()-df[column].mean())
        largest_x_diff = abs(df[column].max()-df[column].mean())

        smallest_x = df[column].mean()-max(smallest_x_diff, largest_x_diff)
        largest_x = df[column].mean()+max(smallest_x_diff, largest_x_diff)
        #smallest_x = min(df[column].min(), df[column].min())
        #largest_x = max(df[column].max(), df[column].max())



        x = np.linspace(smallest_x, largest_x, 100)
        
        mean_pop = df[column].mean()
        std_pop = math.sqrt((((df[column]-df[column].mean())**2).sum())/(len(df)))
        y_pop = stats.norm.pdf(x, mean_pop, std_pop)
        
        mean_samples = df_samples_mean.mean()
        if(num_samples > 1):
            std_samples = math.sqrt((((df_samples_mean-df_samples_mean.mean())**2).sum())/(len(df_samples_mean)))
        else:
            std_samples = math.sqrt((((df_samples_mean-df_samples_mean.mean())**2).sum())/(len(df_samples_mean)-1))
        y_samples = stats.norm.pdf(x, mean_samples, std_samples)

        std_sampling_dist = std_pop/math.sqrt(sample_size)
        y_sampling_dist = stats.norm.pdf(x, mean_pop, std_sampling_dist)

        std_error_estimated = std_samples/math.sqrt(sample_size)
        
        def format_axes(fig):
            for i, ax in enumerate(fig.axes):
                ax.text(0.5, 0.5, "ax%d" % (i+1), va="center", ha="center")
                ax.tick_params(labelbottom=False, labelleft=False)

        gs0 = gridspec.GridSpec(1, 1, figure=fig)

        gs00 = gridspec.GridSpecFromSubplotSpec(8, 3, subplot_spec=gs0[0])
        ax1 = fig.add_subplot(gs00[:1, :])
        sns.boxplot(df[column], orient='h', ax=ax1, color='b')
        plt.axvline(mean_pop,color='b', linestyle='-')
        ax1.set_xlim(smallest_x, largest_x)
        ax2 = fig.add_subplot(gs00[1:4, :])
        sns.histplot(df[column], ax=ax2, bins=bins, stat="density", color='b', alpha=0.1)
        sns.lineplot(x=x, y=y_pop, ax=ax2)
        plt.fill_between(x, y_pop, where=(x >= smallest_x) & (x <= largest_x), alpha=0.1, color='b')

        plt.axvline(mean_pop,color='b', linestyle='-', label=f'Mean pop /  Mean samp. distr. {mean_pop:.2f}')

        sns.histplot(df_samples_mean, ax=ax2, bins=bins, stat="density", color='orange', alpha=0.1)

        sns.lineplot(x=x, y=y_samples, ax=ax2, color='orange')
        plt.fill_between(x, y_samples, where=(x >= smallest_x) & (x <= largest_x), alpha=0.1, color='orange')
        plt.axvline(mean_samples,color='orange', linestyle='-', label=f'Mean samples {mean_samples:.2f}')
        
        samples_confidence_lower,samples_confidence_upper  = calculate_confidence_limits(0.95, df_samples_mean)  # df is degrees of freedom

        if(num_samples==1):
            plt.axvline(samples_confidence_lower,color='orange', linestyle='-.',)
            plt.axvline(samples_confidence_upper,color='orange', linestyle='-.',)

            #plt.axvline(mean_samples-(std_samples*1.96),color='purple', linestyle='-.',)
            #plt.axvline(mean_samples+(std_samples*1.96),color='purple', linestyle='-.',)

        if(is_sampling_dist_shown == 'ON'):
            if(num_samples > 1):
                sns.lineplot(x=x, y=y_sampling_dist, ax=ax2, color='green')
                plt.fill_between(x, y_sampling_dist, where=(x >= smallest_x) & (x <= largest_x), alpha=0.1, color='green')

                if(is_exact_standard_error_shown == 'ON'):
                    lower_limit_se, upper_limit_se = calculate_confidence_limits(0.95, dof=sample_size-1, mean=mean_pop, se=std_sampling_dist)
                    plt.axvline(lower_limit_se,color='green', linestyle='-.', label='CI 95% (mean_pop ± t_value*SEM)')
                    plt.axvline(upper_limit_se,color='green', linestyle='-.')

        textstr = '\n'.join(
            (
            r'$\text{population std variation}=%.2f$' % (std_pop, ),
            r'$\text{sampling distribution standard error}=%.2f$' % (std_sampling_dist, ),
            )
        )
        
        props = dict(boxstyle='round', facecolor='wheat', alpha=0.5)
        ax2.text(0.05, 0.95, textstr, transform=ax2.transAxes, fontsize=14,verticalalignment='top', bbox=props)
        
        ax2.set_xlim(smallest_x, largest_x)
        ax2.set_ylim(0, np.max(y_sampling_dist)*2)
        plt.legend()

        ax3 = fig.add_subplot(gs00[4:, :])
        

        #sns.pointplot(data=df_samples_mean[column], ax=ax3, color='green', linestyle="none",errorbar=("pi", 600), capsize=.4,)
        df_samples_random = df_samples.sample(n=min(20, df_samples.shape[1]), axis=1, replace=False, random_state=seed)
        sns.stripplot(
            data=df_samples_random, alpha=.4, legend=False, ax=ax3, orient='h', marker="X"
        )

        #sns.pointplot(
        #    data=df_samples_random, orient='h',
        #    linestyle="none", color='purple', errorbar=("sd", 1.96), err_kws={"linewidth":1},capsize=.4, 
        #    markersize=4, markeredgewidth=3, ax=ax3
        #)

        sns.pointplot(
            data=df_samples_random, orient='h',
            linestyle="none", color='orange', 
            errorbar=(lambda x: calculate_confidence_limits(0.95, observations=x)), err_kws={"linewidth":2},capsize=.4,
            markersize=4, markeredgewidth=3, ax=ax3
        )

        plt.plot([], [], color='orange', label='CI 95% (mean ± t_value*SEM)')
        #plt.plot([], [], color='purple', label='SD * 1.96')


        plt.axvline(mean_pop,color='b', linestyle='-')
        plt.legend()
        
        #plt.axhline(mean_pop,color='b', linestyle='-', label=f'Mean pop /  Mean samp. distr. {mean_pop:.2f}')
        ax3.set_xlim(smallest_x, largest_x)
        #ax3.axhspan(mean_pop-margin_error_pop, mean_pop+margin_error_pop, facecolor='b', alpha=0.3)
        #ax3.axhspan(mean_samples-margin_error_sampled, mean_samples+margin_error_sampled, facecolor='orange', alpha=0.3)
        
        #format_axes(fig)

def bootstrapping(df, sample_size, bins, is_sampling_dist_shown, is_exact_standard_error_shown, seed, num_bootstrap_samples, boostrap_samples_size):   
    def format_axes(fig):
        for i, ax in enumerate(fig.axes):
            ax.text(0.5, 0.5, "ax%d" % (i+1), va="center", ha="center")
            ax.tick_params(labelbottom=False, labelleft=False)

    for column in df.columns:
        #if(not pd.to_numeric(df[column], errors='coerce').notnull().all()):
        #    print(f"Not numerical: {column} \n")
        #    continue
        #
        df_samples = pd.DataFrame()

        smallest_x_diff = abs(df[column].min()-df[column].mean())
        largest_x_diff = abs(df[column].max()-df[column].mean())
        smallest_x = df[column].mean()-max(smallest_x_diff, largest_x_diff)
        largest_x = df[column].mean()+max(smallest_x_diff, largest_x_diff)

        x = np.linspace(smallest_x, largest_x, 100)

        mean_pop = df[column].mean()
        std_pop = math.sqrt((((df[column]-df[column].mean())**2).sum())/(len(df)))
        y_pop = stats.norm.pdf(x, mean_pop, std_pop)

        fig = plt.figure(figsize=(20, 15))

        gs0 = gridspec.GridSpec(1, 1, figure=fig)

        gs00 = gridspec.GridSpecFromSubplotSpec(8, 3, subplot_spec=gs0[0])
        ax1 = fig.add_subplot(gs00[:1, :])
        ax1.set_xlim(smallest_x, largest_x)

        ax2 = fig.add_subplot(gs00[1:4, :])

        if(is_sampling_dist_shown == 'ON'):
            sns.lineplot(x=x, y=y_sampling_dist, ax=ax2, color='green')

        ax2.set_xlim(smallest_x, largest_x)
        ax2.set_ylim(0, np.max(y_sampling_dist)*2)
        plt.legend()
        ax3 = fig.add_subplot(gs00[4:, :])
        
        ax3.set_xlim(smallest_x, largest_x)

        #format_axes(fig)