#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1<num2 && num1<num3)
	{
        printf("\n%d is the smallest",num1);
        if(num1%2==0)
        {
		printf("\n The Smallest number is Even");
		}
		else
		{
		printf("\n The Smallest number is Odd");
		}
		
    }
    else if(num2<num3)
	{
        printf("\n%d is the smallest",num2);
        if(num2%2==0)
        {
		printf("\n The Smallest number is Even");
		}
		else
		{
		printf("\n The Smallest number is Odd");
		}
    }
    else
	{
        printf("\n%d is the smallest",num3);
        if(num3%2==0)
        {
		printf("\n The Smallest number is Even");
		}
		else
		{
		printf("\n The Smallest number is Odd");
		}
    }
    if(num1>num2 && num1>num3)
	{
        printf("\n%d is largest",num1);
        if(num1%2==0)
        {
		printf("\n The Largest number is Even");
		}
		else
		{
		printf("\n The Largest number is Odd");
		}
    }
    else if(num2>num3)
	{
        printf("\n%d is largest",num2);
        if(num2%2==0)
        {
		printf("\n The Largest number is Even");
		}
		else
		{
		printf("\n The Largest number is Odd");
		}
    }
    else
	{
        printf("\n%d is largest",num3);
        if(num3%2==0)
        {
		printf("\n The Largest number is Even");
		}
		else
		{
		printf("\n The Largest number is Odd");
		}
    }
    getch();
}
