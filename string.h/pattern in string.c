#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,k;
	char string[20];
	printf("Enter the string:-\n\n");
	scanf("%d",string);
	for(i=0;string[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf("%d",string[j]);
		}
		printf("\n");
	}
	getch();
}
