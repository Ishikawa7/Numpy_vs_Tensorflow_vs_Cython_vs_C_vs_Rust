# matrix multiplication of two random matrices 1000x1000 ten times with tensorflow 3
# mean time it took to compute the result

import tensorflow as tf
import numpy as np
import time

# Enable eager execution
tf.compat.v1.enable_eager_execution()

N = 10

# Create two random matrices
a = tf.constant(np.random.rand(N, N), name='a')
b = tf.constant(np.random.rand(N, N), name='b')

mean_time = 0
for i in range(100):


    # Compute the matrix multiplication
    start_time = time.time()

    c = tf.matmul(a, b)

    end_time = time.time()

    mean_time += end_time - start_time

print("Mean execution time:", mean_time/100, "seconds")

