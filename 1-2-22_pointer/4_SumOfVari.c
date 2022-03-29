#include <stdio.h>

add(int*,int*);

int main ()
{
  int a = 10,b = 20;

 
  add(&a,&b);
  
  return 0;
}

add(int *x,int *y)
{
    printf("Sum = %d",*x+*y);
}

