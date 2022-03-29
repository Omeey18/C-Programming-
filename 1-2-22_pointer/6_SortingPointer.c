#include <stdio.h>



int main ()
{
    int a[5],*ptr[5],temp=0;
    
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
        for(int j=i+1;j<5;j++)
        {
            if(*ptr[i]>*ptr[j])
            {
                temp = *ptr[i];
                *ptr[i] = *ptr[j];
                *ptr[j] = temp;
            }
        }
        
    }
    printf("After Sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr[i]);
    }
    
 
  return 0;
}
