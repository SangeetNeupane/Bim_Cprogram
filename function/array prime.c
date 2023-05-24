#include <stdio.h>
#include <conio.h>
void prime(int size[10]);   
void main()
{
	int i,size[10];
	printf("Enter the  integers \n");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&size[i]);
	}
	prime(size);             
	getch();
}

void prime(int a[])

{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		temp=0;
		for(j=2;j<a[i];j++)
		{
		if(a[i]%j==0)
		{
			temp=1;
			break;

		}
	}
		if(temp==0)
      	{
				printf("\n%d is prime number",a[i]);
      	}
      }
	}

