#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter any character:-");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("%c is a alphabet",ch);
	}
	else if (ch>='0'&&ch<='9')
	{
		printf("%c is a digit",ch);
	}
	else
	{
		printf("%c is a special charachter",ch);
	}
	getch();
}
