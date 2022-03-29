#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *fp;
	fp=(int *)malloc(sizeof(int));
	printf("Memory allocated at %p\n",fp);
	printf("intial value is %d\n",*fp);
	*fp=35;
	printf("A is %d\n",*fp);
	free(fp);

}
