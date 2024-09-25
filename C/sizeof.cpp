#include<stdio.h>
main()
{
	int a=12;
	long int b=434432;
	float c=43.32;
	double d=4324423.53434;
	long double e=4235453434.5356;
	char f='s';
	char str[10]="TOPSTech";
	printf("\nSize of Int:%d",sizeof(a));
	printf("\nSize of Long Int:%d",sizeof(b));
	printf("\nSize of Float:%d",sizeof(c));
	printf("\nSize of Double:%d",sizeof(d));
	printf("\nSize of long double:%d",sizeof(e));
	printf("\nSize of Char:%d",sizeof(f));
	printf("\nSize of String:%d",sizeof(str));
	
}
