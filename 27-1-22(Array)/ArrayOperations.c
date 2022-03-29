#include<stdio.h>

void main()
{
	int arr[]={};

	printf("Enter id of student\n");
	scanf("%d",&id);

	printf("Current Marks is %d\n",marks[id]);
	printf("\n Updated Marsk");
	scanf("%d",&newMarks);
	marks[id] =newMarks;

	printf("\n Updated Marks is %d",marks[id]);
}
