#include<stdio.h>  


int main(){    
    int n=0;
    
    printf("Enter size of array1: \n");
    scanf("%d",&n);
    
    int arr1[n],arr2[n];
    printf("Enter values of array1: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);    
    }
    
    for(int i=0;i<n;i++)
    {
       arr2[i] = arr1[i];    
    }
    
    printf("Values of Array2 from Array1: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);    
    }
 return 0;    
} 
