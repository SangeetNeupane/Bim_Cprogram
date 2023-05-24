#include<stdio.h>
#include<conio.h>
void main()
{
	int fact=1,num,*a;
    printf("Enter the number : ");
    scanf("%d",&num);
    a=num;
    while(*a>0)
    {
    	fact=fact * *a;
    	*a--;
	}
	printf("The factorial of %d is %d.",*a,fact);
	getch();
}
