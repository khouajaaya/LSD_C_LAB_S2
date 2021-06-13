#include "header.h"

/*
** Hint: You need to use rand function for generating random numbers
** and to get out of getting the same series of random numbers every time
** you run the program you need to use srand.
** https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
void rand_fill_table(int *tab, int size)
{
    srand(time(0));
    for(int i=0;i<size;i++){
        tab[i]=rand();
    }
    return ;
}
