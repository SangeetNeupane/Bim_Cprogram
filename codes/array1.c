#include<stdio.h>
#include<conio.h>
void main()
{
	int i, a[10];
	printf("Enter your phone number:-");
	for(i=1;i<=10;i++)
	{
		printf("\nEnter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	printf("The Phone number of Reeza is\n");
	for(i=1;i<=10;i++)
	{
		printf("%d",a[i]);
	}
	getch();
	
	
}
