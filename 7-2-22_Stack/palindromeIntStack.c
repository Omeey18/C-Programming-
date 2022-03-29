
#include<stdio.h>
#include<string.h>
#include "StackInt.h"

void main()
{

	int s[20];	
	int top=0,i=0,len,flag;
	
	printf("Enter Length of String: \n");
	scanf("%d",&len);

	for(int i=0;i<len;i++)
		scanf("%d",&s[i]);
	
	int stack[len/2];
	while(s[i] != 3)
	{
		push(s[i],&top,stack,len/2);
		i++;
	}

	i++;
	while(i != len){
		if(s[i] != pop(&top,stack))
		{
			flag=0;
		}
		else{
			flag=1;
			//printf("String is valid..!\n");
		}
		i++;
	}
	if(flag==1)
	{
		printf("\nString is Palindrome..!\n");	
	}
	else
		printf("\nString is not Palindrome..!\n");
}
