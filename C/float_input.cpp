#include<stdio.h>
main()
{
	static float pi;
	printf("Enter value of PI:");
	scanf("%f",&pi);
	printf("\nValue of PI:%f",pi);
}
