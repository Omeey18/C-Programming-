#include <stdio.h>
extern void addition(int a,int b);

int main()
{
    extern int p;
    int x=2,y=3;
    
    printf("Value of P is %d\n",p);
    addition(x,y);
    

    return 0;
}
