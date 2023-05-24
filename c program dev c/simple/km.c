#include<stdio.h>
#include<conio.h>
void main()
{
	int km,m,cm,temp;
	printf("Enter the value of cm:-");
	scanf("%d",&cm);
	km=cm/100000;
	temp=cm%100000;
	m=temp/100;
	cm=temp%100;
	printf("km=%d",km);
	printf("m=%d",m);
	printf("cm=%d",cm);
	getch();
}
