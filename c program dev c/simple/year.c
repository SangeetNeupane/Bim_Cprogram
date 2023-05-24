#include<stdio.h>
#include<conio.h>
void main()
{
	int days,months,years,temp;
	printf("Enter the value of days :-");
	scanf("%d",&days);
	
	years=days/360;
	temp=days%360;
	months=temp/30;
	days=temp%30;
	printf("\n years=%d",years);
	printf("\n months=%d",months);
	printf("\n days=%d",days);
	getch();
}
