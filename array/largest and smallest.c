#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[100],l,s,n;  //l=largest`s=small
	printf("Array Size :\n");
	scanf("%d",&n);
	printf("Enter the numbers:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	l=s=A[0];
	for(i=0;i<n;i++)
	{
	if(s>A[i])
	{
		s=A[i];
	}
	}
	for(i=0;i<n;i++)
	{
	if(l<A[i])
	{
		l=A[i];
	}
	}
	printf("Largest Number=%d\n\n",l);
	printf("Smallest Number=%d",s);
	getch();	
}
