#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	int area,side;
	printf("Enter the value of side:-");
	scanf("%d",&side);
	area=(sqrt(3)/4)*pow(side,2);
	printf("\n The area of equilateral triangle which side is %.2d = %.2d",side,area);
	getch();
}
