/*  Display sum of first n even numbers */
/* Eg. if the value of n is then calculate 2 + 4 + 6 + 8 + 10 =30 */
#include<stdio.h>
main()
{
	int n, i, j, s=0;		//variable type declaration
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1,j=2; i<=n; i++,j=j+2)  //loop
	{
		s=s+j;
	}
	printf("The sum of first %d even  numbers is: %d", n,s);
}

/*
      %d is known as format /control strings.
      it tells the compiler about the types 
      of the value to use and also it serves
      as a place holder.
*/      
