#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],count1=0;
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
	count1=count1+1;
	}
	}	
	printf("\n Total negative numbers = %d",count1);
	getch();
}
