#include<stdio.h>
#include<conio.h>
void main()
{
	float hour;
	printf("Enter the hour to complete a particular work:- ");
	scanf("%f",&hour);
	if((hour>=2)&&(hour<3))
	{printf("Worker Have Highly Efficent");
	}
	else if ((hour>=3)&&(hour<4))
	{printf("worker is ordered to improve speed");
	}
	else if ((hour>=4)&&(hour<5))
	{printf("worker should given training to improve his speed");
	}
	else
	{printf("The worker has to leave the company");
	}
	getch();
}
