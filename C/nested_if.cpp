#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	if(a!=0 && b!=0) //parent - root
	{
		if(a<b) //child
		{
			printf("\nSum:%d",a+b);
		}
		else
		{
			printf("\nSub:%d",a-b);
		}
	}
	else
	{
		printf("Error!Plz input valid number...");
	}
}
