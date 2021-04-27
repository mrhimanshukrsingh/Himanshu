#include<stdio.h>
int main()
{
	float km, mtr, ft, inch, cm;
	printf("Enter distance between two cities (in kms.): ");
	scanf("%f", &km);
	mtr = km * 1000;
	ft = mtr * 3.28084;
	inch = ft * 12;
	cm = mtr * 100;
	printf("Distance in meters: %.2f\n", mtr);
	printf("Distance in feet: %.2f\n", ft);
	printf("Distance in inches: %.2f\n", inch);
	printf("Distance in centimeters: %.2f\n", cm);
	return 0;
}
