#include "header.h"

int recursive_fibo(int n)
{
    if(n<=1)
        return n;
    return recursive_fibo(n-1)+recursive_fibo(n-2);
}
