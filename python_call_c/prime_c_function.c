// create a c function that find the prime numbers between 1 and 100000 and put them in an array

// Path: prime_c_function.c
// Compare this snippet from prime_c.c:
// // find the prime numbers between 1 and 1000 and put them in an array
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(void)
{
    int i, j, k, n, m;
    int prime[100000];
    int count = 0;
    int flag = 0;
    for (i = 2; i <= 100000; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            prime[count] = i;
            count++;
        }
        flag = 0;
    }
    return prime;
}

