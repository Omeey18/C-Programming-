
#include<stdio.h>  


int main(){    
    int n=0,odds=0,evens=0;
    
    printf("Enter size of array1: \n");
    scanf("%d",&n);
    
    int arr1[n];
    printf("Enter values of array1: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);    
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr1[i]%2==0)
            evens++;
        else
            odds++;
    }
    
    printf("Number of Odds : %d\n",odds);
    printf("Number of Evens : %d\n",evens);
 return 0;    
}  
