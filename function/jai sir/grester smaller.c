#include<stdio.h>
#include<conio.h>
int greater(int,int,int);
int smallest(int,int,int);
void main()
{
int a,b,c,result,result1;
printf("Enter the number:-\n");
scanf("%d %d %d",&a,&b,&c);
result=greater(a,b,c);
result1=smallest(a,b,c);
printf("The greater number is %d and the smallest number is %d",result,result1);
getch();
}
int smallest(int a,int b,int c)
{
if(a<b && a<c)
{
return a;
}
else if(b<a && b<c)
{
return b;
}
else
{
return c;
}
}
int greater(int a,int b,int c)
{
if(a>b && a>c)
{
return a;
}
else if(b>a && b>c)
{
return b;
}
else
{
return c;
}
}
