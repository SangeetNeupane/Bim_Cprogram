#include<stdio.h>
#include<conio.h>
void main()
{
	int *temp=0,a,rem;
	printf("Enter the number : ");
	scanf("%d",&a);
	while(a>0)
	{
		rem=a%10;
		*temp=*temp+rem;
		a=a/10;
	}
	printf("The sum of number is %d",*temp);
	getch();

}
