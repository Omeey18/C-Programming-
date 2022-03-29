#include <stdio.h>

int main()
{
    int a=10,*p;
    p= &a;
    printf("Value of A: %d\n",*p);
    printf("Address of A: %p\n",p);
    
    return 0;
}
