

#include <stdio.h>
int swap(int,int);
int main()
{
    int num1,num2;
    printf("Enter value of n1 & n2:\n");
    scanf("%d %d",&num1,&num2);
    
    printf("Before Swap num1 : %d  num2 : %d\n", num1,num2);
    swap(num1,num2);
    

    return 0;
}



int swap(int x, int y)
{
    int temp=0;
    temp = x;
    x = y;
    y = temp;
    
    printf("After Swap num1 : %d  num2  :%d\n", x,y);
}

