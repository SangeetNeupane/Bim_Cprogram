#include<stdio.h>
#include<conio.h>
void main()
{
	int n ,i ,rem=1;
	printf("enter a positive number:\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{rem=0;
		break;
	}
		}
		
	if(n==1)
	{
		printf("1 is either prime or composite.\n");
		}	
		else
		{
			if(rem==1)
			{
				printf("%d is prime number.\n",n);
			}
			else
			{
				printf("%d is  not prime number.\n",n);
			}
			
		}
		getch();
	}
