#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter the number : ");
scanf("%d",&num);
if(num>=1000&&num<=9999)
{
printf("Welcome");
}
else
{
printf("Rejected");
}
getch();
}
