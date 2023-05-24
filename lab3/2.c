  #include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char x,y,z;  //gender=x,living standard=y,health status=z
	printf("Enter the age of person:-"); 
	scanf("%d",&age);
	printf("Enter the Gender of person(Male for m & Female for f):-");
	scanf("\n%c",&x);
	printf("Enter the living standard of person(c for City & v for Village):-");
	scanf("\n%c",&y);
	printf("Enter the health status of person(e for Excellent & p for Poor):-");
	scanf("\n%c",&z);
	if((z=='e')&&(y=='c')&&(x=='m')&&(age>=25||age<=35))
	{
	printf("\nThe Premium Is Rs.4 Per Thousand And His Policy Cannot Exceed Rs.2 Lakhs");
    }
    else if((z=='e')&&(y=='c')&&(x=='f')&&(age>=25||age<=35))
    {printf("\nThe Premium Is Rs.3 Per Thousand And Her Policy Cannot Exceed Rs.1 Lakhs");
	}
	else if((z=='p')&&(y=='v')&&(x=='m')&&(age>=25||age<=35))
	{printf("\nThe Premium Is Rs.6 Per Thousand And His Policy Cannot Exceed Rs.10000");
	}
	else
	{printf("\nIn all other cases the person is not insured.");
	}
	getch();
	 
}
