#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=j*j;
			printf("%3d",k);
		}
		printf("\n");
	}
	getch();
}
