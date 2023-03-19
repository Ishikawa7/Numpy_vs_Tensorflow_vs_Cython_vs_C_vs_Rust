#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
This version uses a single dimensional array for each matrix,which is allocated dynamically using malloc. 
The elements of the matrices are accessed using the formula matrix[row * N + col] instead of matrix[row][col],
which allows for better cache utilization and improved performance. 
*/

int main() {
    int N = 1000;
    int i, j, k;
    double *a = malloc(N * N * sizeof(double));
    double *b = malloc(N * N * sizeof(double));
    double *c = malloc(N * N * sizeof(double));

    // initialize matrices
    for (i = 0; i < N * N; i++) {
        a[i] = (double)rand() / (double)RAND_MAX;
        b[i] = (double)rand() / (double)RAND_MAX;
        c[i] = 0.0;
    }

    double mean_time = 0.0;
    clock_t start, end;

    // compute matrix multiplication 100 times
    for (i = 0; i < 10; i++) {
        
        start = clock();

        // compute matrix multiplication
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                double sum = 0.0;
                for (int l = 0; l < N; l++) {
                    sum += a[j * N + l] * b[l * N + k];
                }
                c[j * N + k] = sum;
            }
        }

        end = clock();
        mean_time += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("Mean time: %f seconds for 100 matrix multiplications of 1000x1000 matrices (C)", mean_time / 10.0);

    free(a);
    free(b);
    free(c);

    return 0;
}
