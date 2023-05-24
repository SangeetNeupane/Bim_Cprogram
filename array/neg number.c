#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10];
	printf("Enter the numbers:-");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Negative Number:-");
	for(i=0;i<10;i++)
	{
	if(A[i]<0)
	{
		
	printf("%d\t",A[i]);
	}
	}	
	getch();
}
