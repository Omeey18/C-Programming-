#include<stdio.h>

void main()
{
	
	int num1[2][2]={};
	int max = num1[0][0];
	

	//getting value of matrix from user
	printf("\nEnter Matrix value: \n");	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{	
			scanf("%d",&num1[i][j]);	
		}	
	}	
	

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(num1[i][j]>max)
				max = num1[i][j];
		}	
	}

	printf("\nMax value is: %d\n",max);

}
