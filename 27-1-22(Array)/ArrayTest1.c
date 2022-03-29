#include<stdio.h>

void main()
{
	int id, newMarks;
	int marks[5]={23,45,67,89,12};

	printf("Enter id of student\n");
	scanf("%d",&id);

	printf("Current Marks is %d\n",marks[id]);
	printf("\n Updated Marsk");
	scanf("%d",&newMarks);
	marks[id] =newMarks;

	printf("\n Updated Marks is %d",marks[id]);
}
