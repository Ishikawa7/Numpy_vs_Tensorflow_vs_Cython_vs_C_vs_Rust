# matrix multiplication of two random matrices 1000x1000 hundred times with pure python
# print the mean time it took to compute the result

import time
import random

N = 10

mean_time = 0

# Create two random matrices

a = [[0 for i in range(N)] for j in range(N)]

b = [[0 for i in range(N)] for j in range(N)]

for i in range(N):
    
        for j in range(N):
    
            a[i][j] = random.random()
    
            b[i][j] = random.random()

for i in range(100):
      
        # Compute the matrix multiplication
        print("Here")
    
        c = [[0 for i in range(N)] for j in range(N)]
    
        start_time = time.time()
    
        for i in range(N):
    
            for j in range(N):
    
                for k in range(N):
    
                    c[i][j] += a[i][k] * b[k][j]
    
        end_time = time.time()
    
        mean_time += end_time - start_time

print("Mean execution time:", mean_time/100, "seconds")