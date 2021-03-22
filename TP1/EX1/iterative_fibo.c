#include "header.h"

int iterative_fibo(int n)
{
    int f1=0,f2=1,s=0;
        for(int i=1;i<n;i++){
            s=f1+f2;
            f1=f2;
            f2=s;
        }
    return s;
}
