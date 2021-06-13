#include "header.h"

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime_opt(int n)
{
    int i=2;
    while (i<=sqrt((double)n))
    {
        if(n%i==0){
            return false;
        }
        i++;
        
    }
    return true;
}



void    get_primes_opt(int n)
{
    for (int i = 2; i < n; i++)
    {
        if(is_prime_opt(i)==true){
            printf("%d\n",i);
        }
    }
    return;
}
