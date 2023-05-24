#include<stdio.h>
#include<conio.h>
void prime(int n[10]);
void main()
{
	int n[10],i;
	printf("Enter the number:-\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	prime(n);
	getch();
}
void prime(int m[10])
{
	int j,rem,i;
	printf("The prime numbers are:-\n\n");
	for(i=0;i<5;i++)
	{
		rem=0;
		for(j=2;j<m[i];j++)
		{
			if(m[i]%j==0)
			{
				rem=1;
				break;
			}
		}

if(rem==1)
{
    printf("%d\t",m[i]);
}
	}

}
