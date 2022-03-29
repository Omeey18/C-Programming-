#include <stdio.h>
int firstNNumber(int);
int main()
{
    int num;
    printf("Enter value of n:\n");
    scanf("%d",&num);
    
    printf("Ans is :%d\n", firstNNumber(num));

    return 0;
}



int firstNNumber(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    return (sum);
}

