#include<stdio.h>
#include<conio.h>
void string();
void main()
{
string();
getch();
}
void string()
{
int i,count=0;
char str[20];
printf("Enter the string:-");
gets(str);
while(str[i]!='\0')
{
count=count+1;
i++;
}
if(count==7)
{


printf("The middle character of string is %c",str[3]);
}
else
{
printf("please enter the another string");
}
}
