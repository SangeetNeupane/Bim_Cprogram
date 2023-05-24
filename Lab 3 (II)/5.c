#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the number of year:-");
scanf("%d",&a);
if (a%400==0)
{
printf("%d is leap year",a);
}
else if(a%100==0)
{
printf("%d is leap year",a);
}
else if(a%4==0)
{
printf("%d is leap year",a);
}
else
{
	printf("%d is not leap year",a);
}
getch();
}
