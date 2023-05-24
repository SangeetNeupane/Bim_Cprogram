#include <stdio.h>
#include <conio.h>
void main()
{	
int a=1,b=1,c=0,i;
printf("****Fibonacci series upto 300****\n");
printf("%d\t%d\t%d\t",c,a,b);
for(i=0;i<=10;i++)
{
c=a+b;
if(c<=300)
{
printf("%d\t",c);
}
a=b;
b=c;
}
getch();
}

