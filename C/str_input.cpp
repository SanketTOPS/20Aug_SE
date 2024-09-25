#include<stdio.h>
main()
{
	char name[20]; //string
	printf("Enter your name:");
	//scanf("%s",&name);
	gets(name); //string input
	//printf("\nMy name is %s",name);
	puts(name);
}
