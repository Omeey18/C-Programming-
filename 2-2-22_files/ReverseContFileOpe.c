#include<stdio.h>
#include<string.h>
void main()
{
	int end;
	char data;
	FILE *fp;
	fp = fopen("data.txt","r");
	fseek(fp,0,SEEK_END);
	end=ftell(fp);
	for(int i=end;i>=0;i--)
	{
		fseek(fp,i,SEEK_SET);
		data=getc(fp);
		printf("%c",data);
	}
	fclose(fp);
}
