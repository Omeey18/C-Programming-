#include <stdio.h>



int main ()
{
    int a[5],*ptr[5],sum=0;
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<5;i++)
    {
        ptr[i] = &a[i];
    }
    for(int i=0;i<5;i++)
    {
        sum += *ptr[i];
    }
    printf("Sum = %d\n",sum);
 
  return 0;
}

