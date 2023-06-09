# matrix multiplication of two random matrices 1000x1000 hundred times using cython
# print the mean time it took to compute the result

# distutils: language = c
# cython: boundscheck=False, wraparound=False, nonecheck=False, cdivision=True

import numpy as np
cimport numpy as np
from libc.math cimport sqrt

DTYPE = np.double
ctypedef np.double_t DTYPE_t

def matmul(double[:, ::1] a, double[:, ::1] b):
    cdef Py_ssize_t i, j, k, n
    n = a.shape[0]
    c = np.zeros((n, n), dtype=DTYPE)
    cdef double tmp

    for i in range(n):
        for j in range(n):
            for k in range(n):
                tmp += a[i, k] * b[k, j]
            c[i, j] = tmp
    return c
