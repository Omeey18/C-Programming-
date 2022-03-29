#include <stdio.h>

swap(int*,int*);

int main ()
{
  int a = 10, b = 20, *p;

  printf ("Before Value of A: %d And Value of B: %d\n", a,b);
  swap(&a,&b);
  printf ("After Value of A: %d And Value of B: %d\n", a,b);
  return 0;
}

swap(int *x,int *y)
{
    int temp=0;
    temp = *x;
    *x = *y;
    *y = temp;
}

