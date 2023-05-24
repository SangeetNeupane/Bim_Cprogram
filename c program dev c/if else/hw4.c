#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter the number:-");
scanf("%d",&num);
if(num%5==0 && num%11==0)
{
printf("%d is divisible by both 5 and 11",num);
}
else
{
printf("%d isn't divisible by both 5 and 11",num);
}
getch();
}
