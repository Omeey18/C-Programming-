#include<stdio.h>

void main()
{
	int num[10]={1,2,3,4,5,6,7,8,8,10};
	int ans,f=0;
	scanf("%d",&ans);

	for(int i=0;i<10;i++)
	{
		if(num[i]==ans)
		{
			printf("\nValue is On index = %d\n",i+1);
			f=1;
		}
	}
	
	if(f==0)	
	printf("\nValue is not in array");
	
}
