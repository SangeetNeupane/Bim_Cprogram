#include<stdio.h>
#include<conio.h>
int number(int);
void main()
{
int a,result;
printf("Enter the number\n");
scanf("%d",&a);
result=number(a);
if(result==0)
{
printf("The number is even");
}
else
{
printf("The number is odd");
}
getch();
}
int number(int x)
{
if(x%2==0)
{
return 0;
}
else
{
return 1;
}
}
