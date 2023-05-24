#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i<=3&&j==1)
			{
				printf("  ");
			}
			if(i<=2&&j==2)
			{
				printf("  ");
			}
			if(i==1&&j==3)
			{
				printf("  ");
			}
			if(i<=4&&j==4)
			{
				printf("1 ");
		    }
		    if(i<=4&&i!=1&&j==3)
		    {
		    	printf("2 ");
			}
			if(i<=4&&i!=1&&j==5)
			{
				printf("2 ");
			}
			if(i<=4&&i!=1&&i!=2&&j==2)
			{
				printf("3 ");
			}
			if(i<=4&&i!=1&&i!=2&&j==6)
			{
				printf("3 ");
			}
			if(i==4&&j==1)
			{
				printf("4 ");
			}
			if(i==4&&j==7)
			{
				printf("4 ");
			}
		}
		printf("\n");
	}
	getch();
}
