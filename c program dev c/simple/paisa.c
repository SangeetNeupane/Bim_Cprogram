#include<stdio.h>
#include<conio.h>
void main()
{
int thousand,hundred,ten,once,paisa,temp,temp1,temp2;
printf("Enter the value of paisa:-");
scanf("%d",&paisa);
thousand=paisa/100000;
temp=paisa%100000;
hundred=temp/10000;
temp1=temp%10000;
ten=temp1/1000;
temp2=temp1%1000;
once=temp2/100;
paisa=temp2%100;
printf("thousand=%d",thousand);
printf("hundred=%d",hundred);
printf("ten=%d",ten);
printf("once=%d",once);
printf("paisa=%d",paisa);

getch();
}
