#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=7;i=i+1)
	{
	for(j=1;j<=i;j=j+1)
	{printf("*\t");
	}
	printf("\n");
	}
	for(i=1;i<=8;i=i+1)
	{
	for(j=1;j<=i;j=j+1)
	{printf("*\t");
	}
	printf("\n");
	}
	for(i=1;i<=4;i++)
	{
		printf("*");
		printf("\n");
	}
	getch();
}
