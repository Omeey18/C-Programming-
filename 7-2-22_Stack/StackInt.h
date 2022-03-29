#include<stdio.h>

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

int pop(int *t,int a[])
{
    int x;
    if(*t<=0)
    {
        printf("Stack is empty\n");
        return 0;
    }
    x = a[*t];
    (*t)--;
    printf("\n%d is removed..!\n",x);
    return x;
}


int peep(int *t,int a[], int i)
{
   // printf("T = %d",*t);
    if((*t)-i+1<=0){
        printf("Underflow\n");
    }
    else
        return a[(*t)-i+1];
}


void change(int *t, int a[], int i, int x)
{
    if((*t)-i+1<=0)
        printf("Underflow\n");
    else{    
        a[(*t)-i+1]=x;
        printf("element Added..!\n");
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

