#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],largest;
	printf("Enter the numbers:-");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	largest=A[0];
	for(i=0;i<10;i++)
	{
	if(A[i]>largest)
	{
		largest=A[i];
	}
	}
	printf("largest Number in array :- %d",largest);	
	getch();
}
