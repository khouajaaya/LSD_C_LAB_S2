#include "header.h"

int iterative_fibo(int n)
{
   

  int TAB[n+2];
  int i;
  TAB[0] = 0;
  TAB[1] = 1;
     for (i = 2; i <= n; i++)
      TAB[i] = TAB[i-1] + TAB[i-2];
  return TAB[n];


}
