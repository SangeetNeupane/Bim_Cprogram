#include<stdio.h>
#include<conio.h>
void main()
{
int num,fact=1;
 printf("Enter the Number:-");
 scanf("%d",&num);
 while (num>0)
 {
 fact=num*fact;
 num=num-1;
}
printf("Factorial value =%d",fact);
getch();
 }
