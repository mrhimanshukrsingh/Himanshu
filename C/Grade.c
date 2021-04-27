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
		if(marks>=80)
		{
			printf("GRADE A");
		}
		else if(marks>=60)
		{
			printf("GRADE B");
		}
		else if(marks>=40)
		{
			printf("GRADE C");
		}
		else
		{
			printf("GRADE F");
		}
	}
}
