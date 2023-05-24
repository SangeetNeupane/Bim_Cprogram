//number Divisible by 4 from 100 to 200//
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("all number frm 100 to 200 divisible by 4 are:");
for(i=100;i<=200;i++)
{
if(i%4==0){
printf("%d ",i);
}
}
getch();
}
