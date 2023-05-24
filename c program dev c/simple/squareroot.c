#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	float n,root;
	printf("Enter the Number:-");
	scanf("%f",&n);
	root = sqrt(n);
	printf("\nSquare Root of %.2f is %.2f",n,root);
	getch();
}
