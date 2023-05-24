#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	printf("Enter the value of three sides:-");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("The given traingle is equilateral triangle");
	}
	else if(a==b||a==c||b==c)
	{
	printf("The given traingle is isosceles triangle");
	}
	else 
	{
	printf("The given traingle is scalene triangle");
	}
	getch();
}
