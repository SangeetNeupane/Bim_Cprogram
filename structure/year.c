#include<stdio.h>
#include<conio.h>
struct date
{
	int year,month,day;

};
void main()
{


	struct date a;
	printf("Enter the date in B.S");
	printf("Year=\t");
	scanf("%d",&a.year);
	printf("Months=\t");
	scanf("%d",&a.month);
	printf("Day=\t");
	scanf("%d",&a.day);
	if(a.day>16)
	{
	a.day=(a.day)-16;
	}
	else
	{
	a.day=((a.day)+30)-16;
	a.month=(a.month)-1;
	}
	if(a.month>8)
	{
	a.month=(a.month)-8;
	}
	else
	{
	a.month=((a.month)+12)-8;
	a.year=(a.year)-1;
	}

	a.year=(a.year)-56;

	printf("\n\n");
	printf("The Date in A.D is\n\n");
	printf("Year = %d",a.year);
	printf("Month=%d",a.month);
	printf("Day=%d",a.day);
	getch();

}
