#include<stdio.h>
#include<conio.h>
void main()
{
	char a[3][50];
	int i;
	for(i=1;i<=3;i++)
	{
		gets(a[i]);
	}
	for(i=1;i<=3;i++)
	{
		printf("%s\n",a[i]);
	}
	getch();	
}
