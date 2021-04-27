/* Display first n natural numbers using while loop*/

#include<stdio.h>
main()
{
	int i=1, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The first %d natural numbers are:\n", n);
	while(i<=n)		//Loop
	{
		printf("%d, ", i);
		i++;
	}	
}
