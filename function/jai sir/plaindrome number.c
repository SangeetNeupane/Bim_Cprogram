#include<stdio.h>
#include<conio.h>
int number(int);
void main()
{
 int a,result;
printf("Enter the number:-\n");
scanf("%d",&a);
result=number(a);
if(result==0)
{
printf("The number is plaindrome");
}
else
{
printf("The number isnot plaindrome");
}
getch();
}
int number(int x)
{
int y,rem,rev=0;
y=x;
while(y>0)
{
rem=y%10;
rev=rev*10+rem;
y=y/10;
}
if(rev==x)
{
return 0;
}
else
{
return 1;
}
}
