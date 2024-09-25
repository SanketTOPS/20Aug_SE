#include<stdio.h>
float pi=3.14;
main()
{
	float r,area;
	printf("Enter value of R:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\nArea of Circle:%f",area);
}
