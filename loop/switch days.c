#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	printf("Choice the number of days(1-7):-");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Sunday");
		break;
		case 2:printf("Monday");
		break;
		case 3:printf("Tuesday");
		break;
		case 4:printf("Wednesday");
		break;
		case 5:printf("Thursday");
		break;
		case 6:printf("Friday");
		break;
		case 7:printf("Saturday");
		break;
		default:printf("There are only 7days in a week");
	}
	getch();
 } 
