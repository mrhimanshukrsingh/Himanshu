#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter your name: ");
	scanf("%[^\n]", name);
	printf("Good Morning! %s.", name);
}
