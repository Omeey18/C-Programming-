#include<stdio.h>

void main()
{
	
	

	int product_no[3],q[3];
	int ans=0;
	
	printf("enter product number and quntity: \n");
	for(int i=0;i<3;i++)
			scanf("%d %d",&product_no[i],&q[i]);		
	
	

	for(int i=0;i<3;i++)
{
			switch (product_no[i])
			{
				case 1:
				ans +=(29.5 * q[i]);
				break;
				
				case 2:
				ans +=(45 *q[i]);
				break;

				case 3:
				ans +=(49 * q[i]);
				break;
			
			}
}		
	
	printf("\nans = %d",ans);

}
