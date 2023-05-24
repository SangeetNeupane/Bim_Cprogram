#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,A[100],reezu=0,sorry=0;
	printf("How many elements do you want to take? ");
	scanf("%d",&n);
	printf("Enter the numbers :\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Even numbers are :\n");
	for(i=1;i<=n;i++)
	{
		if(A[i]%2==0)
		{
		printf("%d ",A[i]);
		reezu++;	
		}
		
	}
	printf("\nOdd numbers are :\n");
	for(i=1;i<=n;i++)
	{
		if(A[i]%2!=0)
		{
			printf("%d ",A[i]);
			sorry++;
		}
	}
	printf("\nNumber of Even= %d",reezu);
	printf("\nNumber of odd= %d",sorry);
	getch();
}
