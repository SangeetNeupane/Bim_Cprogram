#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string1[50],string2[50];
	printf("Enter any string:-\n");
	scanf("%s",string1);
	strcpy(string2,string1);
	strrev(string2);
	if(strcmp(string1,string2)==0)
	{
		printf("It is plaindrom.");
		
	}
	else
	{
		printf("It is not plaindrom.");
	}
	getch();
}
