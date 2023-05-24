#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,h;
	printf("Enter the value of breadth:-");
	scanf("%f",&b);
	printf("\nEnter the value of height:-");
	scanf("%f",&h);
	a=(b*h)/2;
	printf("\n Height =%f",h);
	printf("\n Breadth =%f",b);
	printf("\n Area of given triangle is =%f",a);
	getch();
}
