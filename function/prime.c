#include <stdio.h>  
#include <conio.h> 
void prime(int);    // function prototype
void main()
{
	int num;
	printf("Enter the  integers \n");  
	scanf("%d",&num);
	prime(num);             //function call
	getch();
}

void prime(int num1) //function definition

{
	int i,rem=1;
	for(i=2;i<=num1/2;i++)
	{
		if(num1%i==0)
		{
			rem=0;
		}
	}
	if(num1==1)
	{
		printf("1 is either prime not composite");
	}
	else
	{
		if(rem==1)
		{
			printf("Prime Number");
		}
		else
		{
			printf("Not prime number");
		}
	}
}



