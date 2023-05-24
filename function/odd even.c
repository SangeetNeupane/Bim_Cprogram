#include <stdio.h>  
#include <conio.h> 
void number(int);    // function prototype
void main()
{
	int num;
	printf("Enter the  integers \n");  
	scanf("%d",&num);
	number(num);             //function call
	getch();
}

void number(int a) //function definition

{
	
	if(a%2==0)
	{
	printf("The Even number you entered is %d",a);
	}
	else
	{
	printf("The odd number you entered is %d",a);
    }
}



