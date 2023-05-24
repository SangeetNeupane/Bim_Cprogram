#include<stdio.h>
#include<conio.h>
void main()
{
	int A,B;
	printf("Enter the percentage of main subject A:-");
	scanf("%d",&A);
	printf("Enter the percentage of subsidairy subject B:-");
	scanf("%d",&B);
	if((55<=A)&&(45<=B))
	{
		printf("A student is qualify for a Degree");
		}	
	else if(((55>=A)&&(45<=A))&&(55<=B))	
	{
	printf("A student is qualify for a Degree");	
	}
	else if((45>B)&&(65<=A))
	{
	printf("A student is allowed to reapper in examination in B to qualify for a Degree");
}
	else
	{printf("Student is decleared as fail");
	}
	getch();
	
}
