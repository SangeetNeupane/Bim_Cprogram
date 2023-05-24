#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	printf("Enter the value of three sides:-");
	scanf("%f%f%f",&a,&b,&c);
	if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
	{printf("The triangle is valid");
	}
	else  
	{printf("The triangle is not valid");
	}
	getch();
}
