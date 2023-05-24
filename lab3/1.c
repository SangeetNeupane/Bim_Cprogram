#include<stdio.h>
#include<conio.h>
void  main()
{
	float BS,GS;
	printf("Enter the Basic Salary:-");
	scanf("%f",&BS);
	if(BS<1500)
	{GS=((0.1)*BS)+((0.9)*BS)+BS;
	printf("Gross Salary = %.2f",GS);
	}
	else
	{GS=500+((0.98)*BS)+BS;
	printf("Gross Salary = %.2f",GS);
	}
	getch();
}
