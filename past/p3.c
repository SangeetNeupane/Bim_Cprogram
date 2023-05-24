#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[20];
	int length;
	printf("Enter the string : ");
	scanf("%s",string);
	length=strlen(string);
	if(length==7)
	{
		printf("%c",string[3]);
	}
	else
	{
		printf("Enter another string.");
	}
	getch();
	}
