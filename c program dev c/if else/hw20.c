#include<stdio.h>
#include<conio.h>
void main()
{
	int BS,GS;
	printf("Enter the Basic Salary:-");
	scanf("%d",&BS);
	if(BS<= 10000)
	{GS=BS+(0.2*BS)+(0.8*BS);
	printf("Gross Salary=%d",GS);
	}
	else if(BS>= 10000&&BS<= 20000)
	{GS=BS+(0.25*BS)+(0.9*BS);
	printf("Gross Salary=%d",GS);
	}
	else
	{GS=BS+(0.30*BS)+(0.95*BS);
	printf("Gross Salary=%d",GS);
	}
	getch();
}
