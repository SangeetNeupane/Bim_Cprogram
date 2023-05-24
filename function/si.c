#include<stdio.h>
#include<conio.h>
void interest(int,int,int);
void main()
{
	int p,t,r;
	printf("Enter the principle:\n");
	scanf("%d",&p);
	printf("Enter the rate:\n");
	scanf("%d",&r);
	printf("Enter the time:\n");
	scanf("%d",&t);
	interest(p,t,r);
	getch();
}
	void interest(int p1,int t1,int r1)
	{
		int SI;
		SI=(p1*t1*r1)/100;
		printf("The simple interest is %d",SI);
	}

