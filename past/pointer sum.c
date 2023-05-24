#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,*p,*q;
	printf("Enter the numbers  : ");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=(*p)+(*q);
	printf("The sum is %d ",sum);
	getch();
}
