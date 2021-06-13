#include "header.h"

int main()
{
    for (int i = 0; i < 40; i++)
    {
        int res;
        clock_t begin, end;

        /* Calling recursive fibonacci function */
        begin = clock(); // get the time of begining
        res = recursive_fibo(i);
        end = clock(); // get the time of ending
        printf("recursive_fibo(%d) = %d \tTime elpased is %f\n",
            i,res, (double)(end - begin) / CLOCKS_PER_SEC);

        /* Calling iterative fibonacci function */
        begin = clock(); // get the time of begining
        res = iterative_fibo(i);
        end = clock(); // get the time of ending
        printf("iterative_fibo(%d) = %d \tTime elpased is %f\n",
            i, res, (double)(end - begin) / CLOCKS_PER_SEC);
        printf("==========================================================\n");
    }
    return 0;
}
