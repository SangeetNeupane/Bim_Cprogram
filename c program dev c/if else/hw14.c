#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	printf("Enter the value of three angle:-");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b+c)==180)
	{printf("The triangle is valid");
	}
	else 
	{printf("The triangle is not valid");
	}
	getch();
}
