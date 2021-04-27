#include<stdio.h>
int main()
{
	float age, sum=0, avg;
	int no=10,i;
	printf("Enter the age of %d students below:\n", no);
	for(i=1; i<=no; i++)
	{
		scanf("%f",&age);
		sum = sum + age;
	}
	
	avg = sum/no;
	
	printf("The average age is %.2f.",avg);
}
