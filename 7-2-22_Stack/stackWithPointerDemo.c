#include <stdio.h>

/*int isfull(int *,int );*/
int push(int,int*,int[],int);
void display(int *,int[]);



int main()
{
    int n=5;
    int s[n],top=0,x;
    
    while(1)
    {
        printf("Enter element to push: \n");
        scanf("%d",&x);
        if(push(x,&top,s,n)==0)
            break;
        display(&top,s);
    }
    
    return 0;
}

/*int isfull(int *t1, int n)
{
    if(*t1>=n)
        return 1;
    else
        return 0;
}*/

int push(int x,int *t, int a[], int len)
{
    if(*t<len)
    {
        (*t)++;
        a[*t] = x;
        printf("element pushed...!\n");
        return 1;
    }else
    {
        printf("Stack Overflow...!\n");
        return 0;
    }
}
void display(int *t, int a[])
{
    printf("[ ");
    for(int i=*t;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("]");
    printf("\n");
}
