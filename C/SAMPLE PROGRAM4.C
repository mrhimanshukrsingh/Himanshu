/*-program using function-*/
#include<stdio.h>
int mul (int a,int b);/*-declaration-*/
/*-main program begins-*/
main()
{
	int a, b, c;
	a=5;
	b=10;
	c=mul (a,b);
	printf("multiplication of %d and %d is %d",a,b,c);
}
/*- main program ends
mul() function starts-*/
int mul (int x,int y)
{
	int p;
	p=x*y;
	return(p);
}
/*-mul () function ends-*/
