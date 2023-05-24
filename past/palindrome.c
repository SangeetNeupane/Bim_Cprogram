#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char A[10],string[10];
	printf("Enter the string : ");
	scanf("%s",A);
	strcpy(string,A);
	strrev(string);
	if(strcmp(A,string)==0)
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is not palindrome");
	}
	getch();
}
