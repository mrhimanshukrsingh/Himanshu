#include<stdio.h>
int main()
{
	int no, d, sum=0;
	printf("Enter a 5-digit number:");
	scanf("%d", &no);
	
	d=no%10;
	no=no%10;
	sum=sum+d;
	
	d=no%10;
	no=no%10;
	sum=sum+10;
	
	d=no%10;
	no=no%10;
	sum=sum+10;
	
	d=no%10;
	no=no%10;
	sum=sum+10;
	
	sum=sum+no;
	printf("The sum of digits is %d.\n",sum);
	return 0;
	
}
