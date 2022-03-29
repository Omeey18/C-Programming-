#include<stdio.h>

void main()
{
	char str[20];
	char c;
	int op,f=0;
	
	
	FILE *fp;
	fp=fopen("Om1.txt","w+");
	while(f!=1)
	{
	printf("\nEnter 1 to write in file \n2 to read a file: \n3 to exit\n");
	scanf("%d",&op);
	rewind(fp);
	switch(op)
	{
		case 1:
		printf("Enter data:\n");
		scanf("%s",str);
		fprintf(fp,"%s ",str);
		printf("Data entered...!\n");
		break;

		case 2:
		do{
		c = getc(fp);
		printf("%c",c);
		}
		while(c!=EOF);
		break;
		
		case 3:
		f=1;
		break;

		default:
		break;
}
}
	
	
fclose(fp);

}
