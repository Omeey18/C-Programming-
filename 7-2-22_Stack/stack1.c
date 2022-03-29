#include <stdio.h>
#include<stdlib.h>
#include"Stack.h"
/*int isfull(int *,int );*/




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
                printf("\nFir milenge By\n");
                exit(1);
                
            default:
                printf("invalid Input\n");
                break;
        }
        
    }
    
    return 0;
}


