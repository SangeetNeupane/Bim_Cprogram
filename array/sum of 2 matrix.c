#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,A[3][4],B[3][4],C[3][4];
	printf("Enter the A matrix:-");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the B matrix:-");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("A matrix:-\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d\t",A[i][j]);
		}
			printf("\n");
	}
	printf("B matrix:-\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
		 	C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("The sum of A&B matrix:-\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	getch();
}
