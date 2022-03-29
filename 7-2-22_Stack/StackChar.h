#include<stdio.h>

int push(char x,int *t, char a[], int len)
{
    if(*t<len)
    {
        (*t)++;
        a[*t] = x;
        //printf("element pushed...!\n");
        return 1;
    }else
    {
        printf("Stack Overflow...!\n");
        return 0;
    }
}

int pop(int *t,char a[])
{
    char x;
    if(*t<=0)
    {
        printf("Stack is empty\n");
        return 0;
    }
    x = a[*t];
    (*t)--;
    //printf("\n%c is removed..!\n",x);
    return x;
}


int peep(int *t,char a[], int i)
{
   // printf("T = %d",*t);
    if((*t)-i+1<=0){
        printf("Underflow\n");
    }
    else
        return a[(*t)-i+1];
}


void change(int *t, char a[], int i, char x)
{
    if((*t)-i+1<=0)
        printf("Underflow\n");
    else{    
        a[(*t)-i+1]=x;
        //printf("element Added..!\n");
    }
}



void display(int *t, char a[])
{
    printf("[ ");
    for(int i=*t;i>0;i--)
    {
        printf("%c ",a[i]);
    }
    printf("]");
    printf("\n");
}

