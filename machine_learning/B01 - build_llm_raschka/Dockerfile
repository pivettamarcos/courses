# Use a base image with Python and JupyterLab pre-installed
FROM jupyter/datascience-notebook

# Set the working directory
WORKDIR /app

# Copy the requirements file to the working directory
COPY requirements.txt pip.conf /tmp/
RUN --mount=type=cache,target=/root/.cache/pip \
        pip install --upgrade pip && \
        pip install -r /tmp/requirements.txt

# Expose the JupyterLab port
EXPOSE 8888

# Start JupyterLab
CMD ["jupyter", "lab", "--ip=0.0.0.0", "--port=8888", "--no-browser"]

# docker build -t jupyterlab_b01 .
# docker run -p 8888:8888 -v ${pwd}:/app jupyterlab_b01