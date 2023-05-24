#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*x,*y,sum;
printf("Enter the number:-");
scanf("%d %d",&a,&b);
x=&a;
y=&b;
sum=*x+*y;
printf("sum = %d",sum);
getch();

}
