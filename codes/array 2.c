#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j, A[2][3];
	printf("Enter the A matrix:-\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\nEnter the value of A[%d%d]= ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("A matrix is\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			
			printf("%d",&A[i][j]);
		}
		printf("\n");
	}
	
}
