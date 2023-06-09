# Matrix Multiplication test
This repository contains test of matrix multiplication performance for several programming languages and packages.
The languages and packages tested include:
- C language (naive)
- C language (slightly optimized)
- Rust (naive)
- Python Numpy (built in method)
- Python Tensorflow (built in method, no GPU)
- Python (naive)
- Cython (naive + compiling optimization options enabled) 

For each, between 10 and 100 runs were conducted, and the average was taken as result

The matrix dimensions tested were: 10x10, 100x100, 1000x1000

## Hardware
The tests were done on my machine whose technical details can be found in "hardwareinfo.txt".

## Description
Matrix multiplication is a fundamental operation in many scientific and engineering applications. The goal of this benchmark is to compare the performance of different languages and packages for matrix multiplication, and to provide insights into which languages and packages are best suited for different use cases.

## Results
The results of the benchmark are provided in the "results.csv" file, which contains the execution times for each language and package.

<img title="Results Table" alt="Results Table" src="/results.png">

<img title="Results 10x10 matrix multiplication" alt="Results 10x10 matrix multiplication" src="/results_10x10_matrix_mult.png">

<img title="Results 100x100 matrix multiplication" alt="Results 100x100 matrix multiplication" src="/results_100x100_matrix_mult.png">

<img title="Results 1000x1000 matrix multiplication" alt="Results 1000x1000 matrix multiplication" src="/results_1000x1000_matrix_mult.png">


