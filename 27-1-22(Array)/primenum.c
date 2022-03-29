#include<stdio.h>

void main()
{
	int num,temp,flag=0;
	
	scanf("%d",&num);
	temp = num-1;
if(num!=0)
{
	while(temp>1)
	{
		if(num%temp==0)
		{
			flag=1;
			break;
		}
		temp--;
	}
	if(flag==1)
	{
		printf("Number is  not prime...\n");
	}
	else
		printf("Number is prime...\n");
}
else
printf("Zero is neither prime nor composite....\n");
}
