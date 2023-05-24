#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,sum;
	while(i<=100)
	{printf("\n%d",i);
	i=i+1;
	}
	i=1;
	while(i<=100)
	{
		sum=sum+i;
		
		i=i+2;
	}
	printf("\n Sum of all odd numbers =%d",sum);
	
	getch();
}
