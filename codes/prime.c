#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num;
	printf("Enter the Number:-");
	scanf("%d",&num);
	for(i=1;i<=num;i++);
	{
		if(i%num==0)
		{ 
		printf("Prime Number");
		}
		else
		{
			printf("Not Prime Number");
		}
	}
	
}
