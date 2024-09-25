#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of A and B:");
	scanf("%d%d",&a,&b);
	a+=b; //a=a+b
	printf("\nSum:%d",a);
	a-=b; //a=a-b;
	printf("\nSub:%d",a);
	a*=b; //a=a*b;
	printf("\nMul:%d",a);
}
