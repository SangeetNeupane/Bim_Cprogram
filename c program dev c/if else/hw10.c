#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter the alphabet:-");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("%c is lower case",ch);

	}
	else
	{
		printf("%c is upper case",ch);
	}
	getch();
}
	
