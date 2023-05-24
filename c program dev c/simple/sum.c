#include<stdio.h>
#include<conio.h>
void main()
{
	int num,temp,temp1,temp2,temp3,temp4,temp5,sum;
	printf("Enter the  4 digits number:-");
	scanf("%d",&num);
	temp=num/1000;
	temp1=num%1000;
	temp2=temp1/100;
	temp3=temp1%100;
	temp4=temp3/10;
	temp5=temp3%10;
	sum=(temp5)+(temp4)+(temp2)+temp;
	printf("Number=%d",num);
	printf("\nsum=%d",sum);
	getch();
}

