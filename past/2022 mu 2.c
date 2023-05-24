#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,A[3][3],B[3][3],e;
	printf("Enter matrix A: \n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter matrix B: \n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(A[i][j]==B[i][j])
	
     	{
		 e=1;
	    }
	    else
	    {
	    e=0;	
		}
	}
}
if(e==1)
{
printf("The matrices are equal.");
}
else
{
printf("The matrices are not equal.");
}
		getch();
}
