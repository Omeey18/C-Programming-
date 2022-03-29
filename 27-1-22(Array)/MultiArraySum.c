#include<stdio.h>

void main()
{
	
	//declaring 2 dimention arrays	
	int num1[2][2]={};
	int num2[2][2]={};

	//getting value of matrix-1 from user
	printf("\nEnter Matrix 1: \n");	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{	
			scanf("%d",&num1[i][j]);	
		}	
	}	
	
	//getting value of matrix-1 from user
	printf("\nEnter Matrix 2: \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{	
			scanf("%d",&num2[i][j]);	
		}	
	}	

	//calculating sum and displaying ans.
	printf("\nAns: \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",num1[i][j] + num2[i][j]);
				
		}	
		printf("\n");
	}

}
