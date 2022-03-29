#include <stdio.h>
float findSimpleInterest(float, float,float);
int main()
{
    float p,n,r;
    printf("Enter Initial amout, rate & time:\n");
    scanf("%f %f %f",&p,&n,&r);
    
    printf("Simple intrest is :%f\n",findSimpleInterest(p,n,r));

    return 0;
}



float findSimpleInterest(float p, float n, float r)
{
    return ((p*r*n)/100);
}

