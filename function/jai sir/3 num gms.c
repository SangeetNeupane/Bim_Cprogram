#include<stdio.h>
#include<conio.h>
void greater();
int main()
{
greater();
printf("\n\n\n");
greater();
getch();
}
void greater()
{
int a,b,c,greater,middle, small ;
printf("Enter the three number:-");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
greater=a;
if(b>c)
{
middle=b;
small=c;
}
else
{
middle=c;
small=b;
}
}
else if(b>c&&b>a)
{
greater=b;
if(a>c)
{
middle=a;
small=c;
}
else
{
middle=c;
small=a;
}
}
else
{
greater=c;
if(b>a)
{
middle=b;
small=a;
}
else
{
middle=a;
small=b;
}
}
printf("Greater number is %d\n",greater);
printf("Middle number is %d\n",middle);
printf("Small number is %d\n",small);
}
