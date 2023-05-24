#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char sanu[100];
	printf("Enter the string:-");
	gets(sanu);
	int i,count=0;
	for(i=1;sanu[i]!='\0';i++)
	{
		if(sanu[i]==' ')
		{
			count++;
		}
	}
	printf(" %d",count);
	getch();
}
