#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l=0;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			l++;
			printf("%d ",l);
		}
		printf("\n");
	}
	getch();
}
