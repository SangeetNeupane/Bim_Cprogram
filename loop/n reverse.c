#include<stdio.h>
#include<conio.h>
void main()
{int num;
 printf("Enter the last Number:-");
 scanf("%d",&num);
 while(num!=0)
 {printf("\n%d",num);
 num=num-1;
 }
 getch();
}
