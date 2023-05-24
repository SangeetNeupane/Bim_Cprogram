#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],sum=0,i;
	printf("Enter the 10 element number:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		
		sum=sum+num[i];
	}
	printf("The sum of 10 numbers is %d",sum);
	getch();
}
