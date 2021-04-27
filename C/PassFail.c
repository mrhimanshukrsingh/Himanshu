#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	if(marks>100 || marks<0)
	{
		printf("Invalid marks");
	}
	else
	{	
		if(marks>=40)
		{
			printf("Pass");
		}
		else
		{
			printf("Fail");
		}
	}
}
