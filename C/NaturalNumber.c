/* Display first n natural numbers */

#include<stdio.h>
main()
{
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The first %d natural numbers are:\n", n);
	for(i=1; i<=n; i++)		//Loop
	{
		printf("%d, ", i);
	}	
}
