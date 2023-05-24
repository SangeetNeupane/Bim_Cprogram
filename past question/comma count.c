//count the no of comma(,) in sentence//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i=0,count=0;
printf("enter the string\t");
gets(str);
while(str[i]!='\0')
{
if(str[i]==',')
{
count=count+1;
}
i++;
}
printf("there is %d is number of ',' in sentence ",count);
getch();
}
