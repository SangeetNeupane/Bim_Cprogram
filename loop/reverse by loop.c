#include<stdio.h>
#include<conio.h>
void main()
{int num,rev=0,rem;
 printf("Enter the Number:");
 scanf("%d",&num);
 while(num!=0)
 {rem=num%10;
 rev=rev*10+rem;
 num=num/10;
 }
 printf("Reverse is %d",rev);
 getch();
}
