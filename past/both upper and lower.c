#include<stdio.h>
#include<conio.h>
#include<string.h>
void ch(char[]);
void main()
{
	char s[100];
	printf("Enter the string : \n");
	gets(s);
	ch(s);	
	getch();
}
void ch(char r[])
{
	int i,num;
	for(i=0;r[i]!='\0';i++)
	{	
	if(r[i]>='a'&&r[i]<='z')
	{
		r[i]=r[i]-32;
	}
	else
	{
		r[i]=r[i]+32;
	}
	}
	printf("%s",r);
}
