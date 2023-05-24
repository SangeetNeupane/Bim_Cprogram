#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b,c;
	printf("Enter the value of two angle:-");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("\n Third angle is %d",c);
	getch();
}
