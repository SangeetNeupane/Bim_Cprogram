#include<stdio.h>
#include<conio.h>
void main()
{
	int A[10][10],B[10][10],C[10][10],i,j,n,m;
	printf("Enter the row of matrix:-\n\n");
	scanf("%d",&m);
	printf("Enter the column of matrix:-\n\n");
	scanf("%d",&n);
	printf("Enter the %d  elements of A matrix:-\n\n",n*m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]); 
		}
	}
	printf("Enter the %d  elements of B matrix:-\n\n",n*m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("Matrix A\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",A[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",B[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++) 
	{
		for(j=0;j<n;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("The sum of A and B is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",C[i][j]);
		}
		printf("\n");
	}
	getch();
} 
