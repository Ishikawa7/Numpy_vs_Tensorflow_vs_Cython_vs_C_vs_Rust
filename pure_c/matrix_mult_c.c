// matrix multiplication of two random matrices 1000x1000 hundred times
// print the mean time it took to compute the result

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int main() {
    int i, j, k;
    double **a, **b, **c;
    double mean_time = 0.0;
    clock_t start, end;

    // allocate memory for matrices
    a = (double **)malloc(N * sizeof(double *));
    b = (double **)malloc(N * sizeof(double *));
    c = (double **)malloc(N * sizeof(double *));
    for (i = 0; i < N; i++) {
        a[i] = (double *)malloc(N * sizeof(double));
        b[i] = (double *)malloc(N * sizeof(double));
        c[i] = (double *)malloc(N * sizeof(double));
    }

    // initialize matrices
    for (j = 0; j < N; j++) {
        for (k = 0; k < N; k++) {
            a[j][k] = (double)rand() / (double)RAND_MAX;
            b[j][k] = (double)rand() / (double)RAND_MAX;
            c[j][k] = 0.0;
        }
    }

    // compute matrix multiplication 10 times
    for (i = 0; i < 10; i++) {

        start = clock();
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                for (int l = 0; l < N; l++) {
                    c[j][k] += a[j][l] * b[l][k];
                }
            }
        }
        end = clock();
        mean_time += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("Mean time: %f seconds for 100 matrix multiplications of 1000x1000 matrices (C) ", mean_time / 10.0);

    // free memory
    for (i = 0; i < N; i++) {
        free(a[i]);
        free(b[i]);
        free(c[i]);
    }
    free(a);
    free(b);
    free(c);

    return 0;
}
