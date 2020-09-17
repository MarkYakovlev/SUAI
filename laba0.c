#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int
main()
{
	int a, b, c;
	printf("This program was created for calculating the difference between the first number and second number that you wrote \n");
	printf("Input 1 ");
	scanf("%d", &a);
	printf("Input 2 ");
	scanf("%d", &b);
	printf("Input 3 ");
	scanf("%d", &c);
	int	d = a - b;
	printf("Difference = %d", d);
	return 0;

}