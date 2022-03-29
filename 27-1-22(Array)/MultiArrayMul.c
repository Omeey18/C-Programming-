#include<stdio.h>

void main()
{
	//declaring 2-D array.
	int num1[2][2]={};
	int num2[2][2]={};
	int temp[2][2]={};

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

	
	for(int i=0;i<2;i++)
	{

		for(int j=0;j<2;j++)
		{
			temp[i][j] = 0;

			for(int k=0;k<2;k++)
			{
				
				temp[i][j] = temp[i][j] + num1[i][k]*num2[k][j];
			}		
		}	

	}
	
	printf("\nAns: \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{	
			printf("%d ",temp[i][j]);	
		}	
	printf("\n");	
	}	
	

}
