#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int a,b;
	printf("Enter the Number:-\n");
	scanf("%d",&a);
	b=fact(a);
	printf("The factorial of given number is %d",b);
	getch();
}
int fact(int num)
{
	int n=1;
	while(num>0)
	{
	    n=n*num;
		num--;
	}
	return n;
}



