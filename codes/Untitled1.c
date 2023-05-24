#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	while(i<=100)
	{
		printf("%d\t",i);
		i++;
	}
	printf("\nEven Number\n");
	i=2;
	while (i<=100)
	{
		printf("%d\t",i);
		i=i+2;
	}
	printf("\nOdd Number\n");
	i=1;
	while(i<=100)
	{
		printf("%d\t",i);
		i=i+2;
	}

		getch();
}
