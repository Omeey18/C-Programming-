#include<stdio.h>

void main()
{
char a,b;
int flag=0;
FILE *f1,*f2;
f1 = fopen("file1.txt","r");
f2 = fopen("file2.txt","r");

while(!feof(f1))
{
	a=getc(f1);
	b=getc(f2);
	if(a!=b)
	{
		flag=1;
		break;	
	}
}
if(flag==0)
{
	printf("Files are equal....!\n");
}
else
	printf("Files are  not equal....!\n");
}
