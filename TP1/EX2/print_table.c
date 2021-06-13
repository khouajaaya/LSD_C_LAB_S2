#include "header.h"

/*
** Note: iterating pointer array is the same as stack array.
*/
void    print_table(int *tab, int size)
{
    printf("Here is the array:\n");
    for ( int i = 0; i < size; i++)
    {
        printf("%d ",tab[i]);
    }
    return ;
}
