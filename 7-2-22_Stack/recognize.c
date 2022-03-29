#include<stdio.h>
#include<string.h>
#include "StackChar.h"

void main()
{
	char s[20],x;
	int top=0,i=0,flag;
	scanf("%s",s);
	int len = strlen(s);
	char stack[len/2];
	while(s[i]!='b'){
		push(s[i],&top, stack, len);
		i++;
	}
	//display(&top,stack);
	while(i!=len){
		//printf("%d\n",i);
		x = pop(&top,stack);
		i++;
		
	}	

	if(i==len && top==0){
			printf("Equal Character\n");	
	}else{
			printf("Not Equal Charcter\n");
	}
//display(&top,stack);
}
