#include<stdio.h>
#include<conio.h>
void main()
{int a,b ;
printf("Enter the value of a & b :-");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\na=%d",a);
printf("\nb=%d",b);
getch();
}
