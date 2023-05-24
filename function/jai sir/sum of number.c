#include<stdio.h>
#include<conio.h>
int number(int);
void main()
{
int a,result;
printf("Enter the number:\n");
scanf("%d",&a);
result=number(a);
printf("The number is %d and it's sum is %d",a,result);
getch();
}
int number(int x)
{
int rem,temp=0;
while(x>0)
{
rem=x%10;
temp=temp+rem;
x=x/10;
}
return temp;
}
