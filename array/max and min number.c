#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],min,max;
	printf("Enter the numbers:-");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	min=max=A[0];
	for(i=0;i<10;i++)
	{
	if(min>A[i])
	{
		min=A[i];
	}
	}
	for(i=0;i<10;i++)
	{
	if(max<A[i])
	{
		max=A[i];
	}
	}
	printf("Maximum Number=%d",max);
	printf("\nMinimum Number=%d",min);	


}
