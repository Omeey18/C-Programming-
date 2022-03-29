
#include<stdio.h>  


int main(){    
    int n=0;
    
    printf("Enter size of array1: \n");
    scanf("%d",&n);
    
    int arr1[n];
    printf("Enter values of array1: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);    
    }
    
    printf("Reverse array :\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr1[i]);
    }
    
   
    
 return 0;    
}  
