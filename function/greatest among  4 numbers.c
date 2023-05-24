// wap to find out greatest number among 4

#include<stdio.h>
#include<conio.h>
void greatest(int,int,int,int);
void main()
{
	int a,b,c,d;
	printf("Enter the four integers:-");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	greatest(a,b,c,d);
	getch();
}
void greatest(int a1,int b1,int c1,int d1)
{
	if(a1>b1&&a1>c1&&a1>d1)
	{
		printf("%d is greater",a1);
	}
		else if(b1>a1&&b1>c1&&b1>d1)
	{
		printf("%d is greater",b1);
	}
		else if(c1>b1&&c1>a1&&c1>d1)
	{
		
		printf("%d is greater",c1);
	}	
	else
	{
		printf("%d is greater",d1);
	}
}
