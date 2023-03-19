# use ctypes to call C function

import ctypes
import pathlib

if __name__ == "__main__":
    # Load the shared library into ctypes
    libname = pathlib.Path().absolute() / "prime_c_function.so"
    c_lib = ctypes.CDLL(libname)
    c_lib.cmult.restype = ctypes.c_float
    primes = c_lib.cmult()