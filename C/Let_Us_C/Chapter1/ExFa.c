#include<stdio.h>
int main()
{
	float bs, da, hra, gs;
	printf("Enter basic salary: ");
	scanf("%f", &bs);
	da = bs*40/100;
	hra=bs*20/100;
	gs = bs + da + hra;
	printf("Gross Salary: %.2f", gs);
	return 0;
}
