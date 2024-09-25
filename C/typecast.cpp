#include<stdio.h>
main()
{
	int a,b;
	float c;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	printf("\nSum:%d",a+b);
	printf("\nSub:%d",a-b);
	printf("\nMul:%d",a*b);
	c=float(a)/float(b); //typecasting
	printf("\nDiv:%f",c);
}
