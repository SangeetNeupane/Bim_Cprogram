#include<stdio.h>
#include<conio.h>
void reverse();
int main()
{
reverse();
printf("\n\n");
reverse();
getch();
}
void reverse()
{
int num,reverse=0, rem;
printf("Enter the number:-\n");
scanf("%d",&num);
while(num!=0)
{
    rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
printf("Reverse of given number is %d",reverse);
}
