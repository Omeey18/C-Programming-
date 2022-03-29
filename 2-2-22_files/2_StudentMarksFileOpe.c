#include<stdio.h>

void main()
{
	char name[10];
	int mark;
	FILE *fp;
	fp = fopen("student.txt","w");
	for(int i=0;i<5;i++)
	{
		printf("Enter name & mark of student %d: \n",i);
		scanf("%s %d",name,&mark);
		fprintf(fp,"Name: %s     ",name);
		fprintf(fp,"Marks: %d\n",mark);
	}
fclose(fp);
}
