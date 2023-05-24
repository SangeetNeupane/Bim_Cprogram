#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *s;
	char c;
	char ch[100];
	s=fopen("E:\\a.txt","a");
	printf("Enter the first letter of word:\n");
	getc(c);
	if(c=='a')
	{
		printf("Enter the word:\n");
		fgets(ch,20,s);
	}
	else
	{
	printf("The word don't start with a");
	}
	fclose(s);
}
