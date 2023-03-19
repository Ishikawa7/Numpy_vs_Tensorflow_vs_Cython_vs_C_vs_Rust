import numpy as np
from matrix_mult import matmul
import time
mean_time = 0
n = 1000

a = np.random.rand(n, n)
b = np.random.rand(n, n)

# Compute the matrix multiplication 100 times and print the mean time it took to compute the result
for i in range(10):

    start_time = time.time()
    print("here")
    c = matmul(a, b)
    end_time = time.time()

    mean_time += end_time - start_time

print("Mean execution time:", mean_time/10, "seconds")