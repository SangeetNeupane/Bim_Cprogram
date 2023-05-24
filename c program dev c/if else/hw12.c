#include<stdio.h>
#include<conio.h>
void main()
{
	int month;
	printf("Enter the number month:-");
	scanf("%d",&month);
	if(month==1)
	{
		printf("There are 31 days in this month");
	}
	else if(month==2)
	{
		printf("There are 28 days or 29 days in this month");
	}
	else if(month==3)
	{
		printf("There are 31 days in this month");
	}
	else if(month==4)
	{
		printf("There are 30 days in this month");
	}
	else if(month==5)
	{
		printf("There are 31 days in this month");
	}
	else if(month==6)
	{
		printf("There are 30 days in this month");
	}
	else if(month==7)
	{
		printf("There are 31 days in this month");
	}
	else if(month==8)
	{
		printf("There are 31 days in this month");
	}
	else if(month==9)
	{
		printf("There are 30 days in this month");
	}
	else if(month==10)
	{
		printf("There are 31 days in this month");
	}
	else if(month==11)
	{
		printf("There are 30 days in this month");
	}
	else if(month==12)
	{
		printf("There are 31 days in this month");
	}
	else
	{
		printf("There are only 12 month in year");
	}
	getch();
}
