#include<stdio.h>
#include<conio.h>
void main()
{
	int num,temp,temp1,temp2,temp3,reverse;
	printf("Enter the  3 digits number:-");
	scanf("%d",&num);
	temp=num/100;
	temp1=num%100;
	temp2=temp1/10;
	temp3=temp1%10;
	reverse=(temp3*100)+(temp2*10)+temp;
	printf("Forward=%d",num);
	printf("\nreverse=%d",reverse);
	getch();
}

