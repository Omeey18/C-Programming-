
#include <stdio.h>

int main()
{
    int a=10,*p,**q;
    p= &a;
    q= &p;
    printf("Value of A: %d %d %d\n",a,*p,**q);
    printf("Address of A: %p\n",p);
    printf("Address of p: %p\n",q);
    return 0;
}

