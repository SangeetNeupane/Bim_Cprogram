#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,t,r,SI,CI;
	printf("Enter the value of Principle:-");
	scanf("%f",&p);
	printf("\nEnter the value of time:-");
	scanf("%f",&t);
	printf("\nEnter the value of rate:-");
	scanf("%f",&r);
	SI=(p*t*r)/100;
	CI=p*pow((1+(r/100)),t);
	printf("\n Simple Intrest of given is =%.2f",SI);
	printf("\n Compound Intrest of given is =%.2f",CI);
	getch();
}
