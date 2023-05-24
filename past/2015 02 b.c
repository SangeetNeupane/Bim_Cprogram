#include<stdio.h>
#include<conio.h>
void prime(int n[10]);
void main()
{
	int n[10],i;
	printf("Enter the number:-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	prime(n);
	getch();
}
void prime(int m[])
{
	int j,i,rem;
	printf("The prime numbers are:-\n\n");
	for(i=0;i<10;i++)
	{
		rem=0;
		for(j=2;j<=m[i]/2;j++)
		{
		
		if(m[i]%j==0)
		{
			rem=1;
			break;
		}
	}

	

   if(rem==0)
		{
			printf("%d",m[i]);
		}


}
}
