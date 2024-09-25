#include<stdio.h>
main()
{
	int a,b,choice;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	printf("\n1:Add");
	printf("\n2:Sub");
	printf("\n3:Mul");
	printf("\n4:Div");
	printf("\n\nSelect your choice for operations:");
	scanf("%d",&choice);
	
	switch(choice) //1
	{
		case 1:
		printf("\nAdd:%d",a+b);
		break;
		
		case 2:
		printf("\nSub:%d",a-b);
		break;
		
		case 3:
		printf("\nMul:%d",a*b);
		break;
		
		case 4:
		printf("\nDiv:%d",a/b);
		break;
		
		default:
		printf("\nError...Plz select valid choice.");
		break;
		
	}
}
