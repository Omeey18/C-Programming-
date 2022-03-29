#include <stdio.h>


int addition(int,int);


void main()
{

	int a,b;
	scanf("%d %d",&a,&b);
	printf("Addition = %d\n",addition(a,b));

}

int addition(int x,int y)
{
	return (x+y);
}
