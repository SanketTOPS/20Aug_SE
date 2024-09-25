#include<stdio.h>
main()
{
	int r=1,c=1;
	while(r<=5) //row
	{
		while(c<=r) //column
		{
			printf("* ");
			c++;
		}
		c=1;
		printf("\n");
		r++;
	}
}
