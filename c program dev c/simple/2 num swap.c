#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c ;
printf("Enter the value of a :-");
scanf("%d",&a);
printf("\nEnter the value of b :-");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\na=%d",a);
printf("\nb=%d",b);
getch();
}
