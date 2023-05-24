#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b;
	printf("Enter the number=");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		b=a*i;
		printf("%d * %d = %d\n",a,i,b);
	}
	getch();
}
