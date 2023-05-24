#include<stdio.h>
#include<conio.h>
void main()
{
	float sp,cp,amount;
	printf("Enter the Selling price:-");
	scanf("%f",&sp);
	printf("\nEnter the Cost price:-");
	scanf("%f",&cp);
	if(sp<cp)
	{ amount=sp-cp;
	printf("loss amount=%.2f",amount);
	}
	else if(cp<sp)
	{amount=cp-sp;
	printf("Profit amount=%.2f",amount);
	}
	else
	{
	printf("loss amount = Profit amount");
	}
	getch();
}
	
