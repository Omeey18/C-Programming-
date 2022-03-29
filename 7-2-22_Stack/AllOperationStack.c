#include <stdio.h>
#include<stdlib.h>

/*int isfull(int *,int );*/
int push(int,int*,int[],int);
void display(int *,int[]);
int pop(int*,int[],int);
void change(int*,int[],int, int);
void peep(int[],int*, int);



int main()
{
    int n,op,inx,e;
    printf("Enter Length of stack: \n");
    scanf("%d",&n);
    int s[n],top=0,x;
    
    while(op!=5)
    {
        printf("\n1 for PUSH:\n2 for POP:\n3 for PEEP\n4 for Change\n5 for EXIT: \n");
        scanf("%d",&op);
        
        
        switch(op){
            case 1:
                printf("\nEnter element to push: \n");
                scanf("%d",&x);
                push(x,&top,s,n);
                display(&top,s);
                break;
                
            case 2:
                pop(&top,s,n);
                display(&top,s);
                break;
                
            case 3:
                printf("\nEnter Index: \n");
                scanf("%d",&inx);
                peep(&top, s, inx);
                break;
            
            case 4:
                printf("\nEnter new Element & Index: \n");
                scanf("%d %d",&e,&inx);
                change(&top,s,inx,e);
                display(&top,s);
                break;
            
            case 5:
                printf("\nFir milenge By");
                exit(1);
                
            default:
                printf("invalid Input\n");
                break;
        }
        
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

int pop(int *t,int a[], int len)
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
    return 1;
}


void peep(int *t,int a[], int i)
{
   // printf("T = %d",*t);
    if((*t)-i+1<=0){
        printf("Underflow\n");
    }
    else
        printf("Your element is: %d\n",a[(*t)-i+1]);
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

