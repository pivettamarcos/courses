# Course Name: Supervised Machine Learning: Regression and Classification

## Description
This course provides an in-depth understanding of supervised machine learning techniques for regression and classification problems. It covers various algorithms, evaluation metrics, and practical applications of these techniques.

## Table of Contents
- [Course Overview](#course-overview)
- [Authors](#authors)
- [Additional Info about Implementation](#implementation)

## Course Overview
In the first course of the Machine Learning Specialization, you will:
- Build machine learning models in Python using popular machine learning libraries NumPy and scikit-learn.
- Build and train supervised machine learning models for prediction and binary classification tasks, including linear regression and logistic regression

The Machine Learning Specialization is a foundational online program created in collaboration between DeepLearning.AI and Stanford Online. In this beginner-friendly program, you will learn the fundamentals of machine learning and how to use these techniques to build real-world AI applications. 

This Specialization is taught by Andrew Ng, an AI visionary who has led critical research at Stanford University and groundbreaking work at Google Brain, Baidu, and Landing.AI to advance the AI field.

This 3-course Specialization is an updated and expanded version of Andrew’s pioneering Machine Learning course, rated 4.9 out of 5 and taken by over 4.8 million learners since it launched in 2012. 

It provides a broad introduction to modern machine learning, including supervised learning (multiple linear regression, logistic regression, neural networks, and decision trees), unsupervised learning (clustering, dimensionality reduction, recommender systems), and some of the best practices used in Silicon Valley for artificial intelligence and machine learning innovation (evaluating and tuning models, taking a data-centric approach to improving performance, and more.)

By the end of this Specialization, you will have mastered key concepts and gained the practical know-how to quickly and powerfully apply machine learning to challenging real-world problems. If you’re looking to break into AI or build a career in machine learning, the new Machine Learning Specialization is the best place to start.

## Authors
- Andrew Ng: Founder, DeepLearning.AI & Co-founder, Coursera
- Eddy Shyu: Curriculum Product Manager, DeepLearning.AI
- Aarti Bagul: Curriculum Engineer
- Geoff Ladwig: Curriculum Engineer @ DeepLearning.AI

## Implementation

A spark+hadoop stack was used for additional challange to implement this course's work. Jupyterlab is used as the driver of spark jobs. 1 node is simulated, with 2 spark workers. HDFS is used as the distirbuted storage. Concepts learned:

- Spark + hadoop + jupyterlab_driver containerized stack in docker (docker-compose)
    - YARN ( Resource Manager (in own machine) -> Node Manager (in own machine) )
    - HDFS ( namenode -> datanode )
- Pyspark:
    - SparkSession
    - spark.read.csv
    - DataFrame.cache()
    - DataFrame.select()
    - Dataframe.withColumn()
    - DataFrame.printSchema()
    - DataFrame.randomSplit()
    - DataFrame.collect()
- pyspark.ml
    - feature.VectorAssembler
    - stat.Correlation
    - regression.LinearRegression
    - evaluation.RegressionEvaluator
    
