#include <stdio.h>  
#include <conio.h> 
void greater(int);    // function prototype
void main()
{
	int num;
	printf("Enter the prime number \n");  
	scanf("%d",&num);
	greater(num);             //function call
	getch();
}

void greater(int num1) //function definition

{
	if(num1>90)
	{
		if(num1%2!=0)
		{
			printf("The prime number you have entered is greater then 90 and it is odd");
		}
	}
	else
	{
		if(num1%2!=0)
		{
			printf("The prime number you have entered is smaller then 90 and it is odd");
		}
		else
		{
			printf("The prime number you have entered is smaller then 90 and it is even");
		}
		
	}
}



