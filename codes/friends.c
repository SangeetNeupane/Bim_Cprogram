#include<stdio.h>
#include<conio.h>
void main()
{
	char friends;
	printf("Enter any alphabet(a-c)=");
	scanf("%c",&friends);
	printf("\nName of Friends");
	switch(friends)
	{
		case 'a':
		printf("\nRavi");
		break;
		case 'b':
		printf("\nReeza");
		break;
		case 'c':
		printf("\nSangeet");
		break;
		default:
		printf("\nwrong entry");
	}
	getch();
}
