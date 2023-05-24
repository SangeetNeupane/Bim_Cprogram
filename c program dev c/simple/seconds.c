#include<stdio.h>
#include<conio.h>
void main()
{
	int second,hour,minute,temp;
	printf("Enter the value of second:-");
	scanf("%d",&second);
    hour=second/3600;
    temp=second%3600;
    minute=temp/60;
	second=temp%60;
	printf("\nhour=%d",hour);
	printf("\nminute=%d",minute);
	printf("\nsecond=%d",second);
	getch();
}
