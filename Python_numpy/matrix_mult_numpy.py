# compute a matrix multiplication of two random matrices 1000x1000 hundred times with numpy
# and print the mean time it took to compute the result
#
import numpy as np
import time

N = 1000

mean_time = 0
# Create two random matrices
a = np.random.rand(N, N)
b = np.random.rand(N, N)

for i in range(100):
    # Compute the matrix multiplication
    start_time = time.time()

    c = np.matmul(a, b)

    end_time = time.time()

    mean_time += end_time - start_time

print("Mean execution time:", mean_time/100, "seconds")


