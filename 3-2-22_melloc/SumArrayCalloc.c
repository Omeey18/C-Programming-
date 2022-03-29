#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *fp;
	int n,m,sum=0;
	scanf("%d",&n);
	fp=(int *)calloc(n,sizeof(int));

	for(int i=0;i<n;i++)
	{
		scanf("%d",(fp+i));
	}

	for(int i=0;i<n;i++)
	{
		sum+=*(fp+i);
	}
	printf("How Many number you need add more?:\n");
	scanf("%d",&m);
if(m>0){
	fp=(int *)realloc(fp,sizeof(int)*(n+m));
	printf("Enter New Number:");
	for(int i=n;i<n+m;i++)
	{
		scanf("%d",fp+i);
	}
}
for(int i=n;i<n+m;i++)
{
	sum += *(fp+i);
}	
	printf("Sum= %d\n",sum);
	free(fp);

}
