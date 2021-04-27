/* Display sum of first n natural numbers */
/*Eg. if the value of n is 5 then calulate 1 + 2 + 3 + 4 + 5 = 15 */

#include<stdio.h>
main()
{
	int i, n, s=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)		//Loop
	{
		s = s + i;
	}	
	printf("The sum of first %d natural numbers is: %d", n,s);
}

/*
	%d is known as format/control string. It tells the compiler about the type of
	value to use and also it serves as a place holder.
*/
