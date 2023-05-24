#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	float amount,total_amount,surcharge;
	printf("Enter the total unit:-");
	scanf("%d",&unit);
	printf("The total unit Consumed is %d",unit);
 	if(unit<=50)
	{amount=unit*0.50;
	}
	else if(unit>50&&unit<=150)
	{amount=(50*0.50)+((unit-50)*0.75);
	}
	else if(unit>150&&unit<=250)
	{amount=(50*0.50)+(100*0.75)+((unit-150)*1.20);
	}
	else 
	{amount=(50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*1.50);
	}
	surcharge=amount*0.2;
	printf("\nSurcharge Amount=%.2f",surcharge);
	total_amount=surcharge+amount;
	printf("\nTotal Amount=%.2f",total_amount);
	getch();
}
	
