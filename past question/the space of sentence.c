//count the space in sentence//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void white_space(char str[]);
void main()
{
char str[100];
printf("enter the string\n");
gets(str);
white_space(str);
 getch();
}
void white_space(char str[])
{
int i=0,count=0;
while(str[i]!='\0')
{
if(str[i]==' ')
{
count=count+1;
}
i++;
}
printf("there is %d is number of whitespace in sentence ",count);
}
