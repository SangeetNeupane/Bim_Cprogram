#include<stdio.h>
#include<conio.h>
void main()
{int num[5],i;
printf("Enter the numbers:-");
for(i=0;i<5;i++)
{scanf("%d",&num[i]);
}
printf("Even numbers are:-");
for(i=0;i<5;i++)
{
if(num[i]%2==0)
{
printf("%d\t",num[i]);
}
}
getch();
}
