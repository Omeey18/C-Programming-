#include<stdio.h>

void main()
{
	int num[10]={145,234,354,454,5234,63,47,8,9,10};
	int ans=num[0];

	for(int i=1;i<10;i++)
	{
		if(num[i]<ans)
		{
			ans=num[i];
		}
	}
	
	printf("\nMin value = %d\n",ans);
}
