#include <stdio.h>  
#include <conio.h> 
void sum(int,int);    // function prototype
void main()
{
	int num1,num2;
	printf("Enter the two integers \n");  
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);             //function call
	getch();
}

void sum(int a, int b) //function definition

{
	int result= a + b;
	printf("the sum of the numbers you entered is %d", result);
}



