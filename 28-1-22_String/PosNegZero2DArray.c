
#include<stdio.h>  


int main(){    
    int n=0,pos=0,neg=0,zero=0;
    
    printf("Enter size of array1: \n");
    scanf("%d",&n);
    
    int arr1[n][n];
    printf("Enter values of array1: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i][j]>0)
                pos++;
            else if(arr1[i][j]<0)
                neg++;
            else
                zero++;
        }
    }
    
    printf("\nArray has %d Positive numbers \n",pos);
    printf("\nArray has %d Negative numbers \n",neg);
    printf("\nArray has %d Zero numbers \n",zero);
   
    
 return 0;    
}  
