/*-investment problem-*/
#include<stdio.h>
#define period 10
#define principal 5000.00
/*-main program begins-*/
main()
{
	/*-declaration statements-*/
	int year;
float amount,value,inrate;
/*-assignment statements-*/
amount = principal;
inrate = 0.11;
year=0;
/*-computation using while loop-*/
while(year <= period)
{ printf("%2d %8.2f\n",year,amount);
value=amount+inrate * amount;
year=year + 1;
amount=value;
}
/*-while loop ends-*/
}
/*-program ends-*/
