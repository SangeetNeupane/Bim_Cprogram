#include<stdio.h>
#include<conio.h>
	void main()
{
	int a,b,result,choice;
	printf("Enter first number=");
	scanf("%d",&a);
	printf("Enter second number=");
	scanf("%d",&b);
	printf("\nJust type choice what do you want to do");
	printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Remainder");
	printf("\nEnter your choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:result=a+b;
		printf("sum=%d",result);
		break;
		case 2:result=a-b;
		printf("Difference=%d",result);
		break;
		case 3:result=a*b;
		printf("Product=%d",result);
		break;
		case 4:result=a/b;
		printf("Divide=%d",result);
		break;
		case 5:result=a%b;
		printf("Remainder=%d",result);
		break;
		default:printf("Invalid choice");
	}
		getch();
}
