#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	float fine;
	printf("Enter the number of days late to subbmission the book:- ");
	scanf("%d",&num);
	if ((num!=0)&&(num<=5))
	{ fine= num*0.50;
	printf("LATE FEE=%.2f",fine);
	}
	else if((num>=6)&&(num<=10))
	{fine=5*0.50+(num-5)*1;
	printf("LATE FEE=%.2f",fine);
	}
	else if((num>=11)&&(num<=30))
	{fine=5*0.50+5*1+(num-10)*5;
	printf("LATE FEE=%.2f",fine);
	}
	else
	{printf("your membership has been cancelled");
	}
	getch();
}
   
