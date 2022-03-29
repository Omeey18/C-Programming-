#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *fp;
	int n,m;
	printf("Enter N numbers: \n");
	scanf("%d",&n);
	fp=(int *)calloc(n,sizeof(int));

	for(int i=0;i<n;i++)
	{
		scanf("%d",&fp[i]);
	}
	printf("How Many number you need add more?:\n");
	scanf("%d",&m);
if(m>0){
	fp=(int *)realloc(fp,sizeof(int)*(n+m));
	printf("Enter New Number:");
	for(int i=n;i<n+m;i++)
	{
		scanf("%d",&fp[i]);
	}
}
for(int i=0;i<n+m;i++)
{
	printf("%d",fp[i]);
}	
	free(fp);

}
