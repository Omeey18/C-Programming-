#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#include<ctype.h>
#include "StackChar.h"

bool isOpe(char);
int pre(char);

int pre(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return 0;
}

bool isOpe(char c){
	if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
		return true;
	else
		return false;
}

void main()
{
	int count=0,top=0;
	char in[20],temp;
	printf("Enter your expression: \n");
	scanf("%s",in);
	int len=strlen(in);
	char out[len],ope[len];

for(int i=0;i<len;i++)
{
//printf("outer while\n");
	if(isalpha(in[i]))
	{
		//printf("is alpha\n");
		out[count]=in[i];
		count++;	
	}
	if(isOpe(in[i]))
	{
		//printf("is operator\n");
		if(pre(ope[top])>=pre(in[i])||top==0)
		{
		while(pre(ope[top])>=pre(in[i]))
		{
			//printf("inner while loop\n");
			temp = pop(&top,ope);
			out[count] = temp;
			count++;
		}
		push(in[i],&top,ope,len);
		//printf("push operator\n");
		}else
			push(in[i],&top,ope,len);
	}	
}
while(top!=0){
	temp = pop(&top,ope);
	out[count] = temp;
	count++;

}
puts(out);
}



