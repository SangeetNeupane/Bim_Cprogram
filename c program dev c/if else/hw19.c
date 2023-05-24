#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,percentage;
	printf("Enter the mark of Physics-");
	scanf("%f",&a);
	printf("\nEnter the mark of Mathematics:-");
	scanf("%f",&b);
	printf("\nEnter the mark of Chemistry:-");
	scanf("%f",&c);
	printf("\nEnter the mark of Biology:-");
	scanf("%f",&d);
	printf("\nEnter the mark of Computer:-");
	scanf("%f",&e);
	percentage=(a+b+c+d+e)/5;
	printf("\nPercentage=%.2f",percentage);
	if(percentage >= 90)
	{printf("\nGrade A");
	}
	else if(percentage >= 80)
	{printf("\nGrade B");
	}
	else if(percentage >= 70)
	{printf("\nGrade C");
	}
	else if(percentage >= 60)
	{printf("\nGrade D");
	}
	else if(percentage >= 40)
	{printf("\nGrade E");
	}
	else 
	{printf("\nGrade F");
	}
	getch();
}
