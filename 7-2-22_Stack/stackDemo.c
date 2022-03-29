#include <stdio.h>

int isfull();
int push(int);
void display();

int n=5;
int s[5],top=0;

int main()
{
    
    int x;
    while(1)
    {
        printf("Enter element to push: \n");
        scanf("%d",&x);
        if(push(x)==0)
            break;
        display();
    }
    
    return 0;
}

int isfull()
{
    if(top>=n)
        return 1;
    else
        return 0;
}

int push(int x)
{
    if(isfull()==0)
    {
        top++;
        s[top] = x;
        printf("element pushed...!\n");
        return 1;
    }else
    {
        printf("Stack Overflow...!\n");
        return 0;
    }
}
void display()
{
    printf("[ ");
    for(int i=top;i>0;i--)
    {
        printf("%d ",s[i]);
    }
    printf("]");
    printf("\n");
}

