#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,totalmark,averagemark,percentage ;
	printf("Enter the mark of science:-");
	scanf("%f",&a);
	printf("\nEnter the value of math:-");
	scanf("%f",&b);
	printf("\nEnter the value of english:-");
	scanf("%f",&c);
	totalmark=a+b+c;
	percentage=((a+b+c)*3)/100;
	averagemark=(a+b+c);
	printf("\n Total Mark is =%d",totalmark);
	printf("\n Average Mark is =%d",averagemark);
	printf("\n Percentage is =%d",percentage);
	getch();
}
