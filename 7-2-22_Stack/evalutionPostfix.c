#include<stdio.h>
#include<ctype.h>
#include "StackChar.h"

int operation(int a,int b, char op){
switch(op){
	case '+':
	return a+b;
	
	case '-':
	return a+b;

	case '*':
	return a+b;
	
	case '/':
	return a+b;

}

}


void main()
{
	int n=10;
	char in[10],out[10],s[10];
	int top=0;

	printf("Enter String: \n");
	scanf("%s",in);

	int i=0;j=0;

	while(in[i]!='\0'){
	if(iddigit(in[i])){
		printf(" Digit is %c\n")
	}
	}
	
}



