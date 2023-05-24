#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter the number:-");
scanf("%d",&num);
if(num%5==0)
{
if(num%7==0&&num%11!=0)
{printf("%d is divisible by 5 and 7 not by 11",num);
 }
printf("\n%d is divisible by 5 only.",num);
}

else
{
printf("\n%d isn't divisible by 5",num);
}
getch();
}
