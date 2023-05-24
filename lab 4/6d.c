#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,p=5,diff,value;
	for(i=1;i<=p;i++)
	{
		diff=p-1;
		value=i;
		for(j=p;j>=i;j--)
		{
			printf("%3d",value);
			value=value+diff+1;
			diff--;
		}
		printf("\n");
	}
	getch();
}
