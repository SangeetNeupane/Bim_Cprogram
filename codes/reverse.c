#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,rev=1;
	printf("Enter the number=");
	scanf("%d",&num);
	while(num!=0)
	{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
printf("The reverse is %d",rev);
}
