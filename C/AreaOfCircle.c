#include<stdio.h>
int main()
{
	float r, a;
	printf("Please enter radius: ");
	scanf("%f", &r);
	a = 3.14 * r * r;
	printf("The area of circle is %f.",a);
    return 0;
}
