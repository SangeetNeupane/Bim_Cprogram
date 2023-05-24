#include<stdio.h>
#include<conio.h>
void main()
{
int choice,a,fact=1,n,i;
printf("*main menu** \n");
printf(" press....\n 1 for factorial\n2 for odd even\n 3 for exit\n");
printf("enter your choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter your factorial number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of your number is %d",fact);
break ;
case 2:
printf("enter your any number =");
scanf("%d",&a);
if(a%2==0){
printf("%d is even number",a);
}
else{
printf("%d is odd number",a);
}
break ;
case 3:
exit(1);

default:
printf("please enter 1-3");
}
}
