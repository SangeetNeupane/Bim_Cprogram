#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
  char name[20];
  char address[50];
  int salary;
};
void main()
{
struct emp e[5];
int i;
for(i=1;i<=5;i++)
{
printf("Enter the data of employee %d\n",i);
printf("Enter the name of employee : \n");
scanf("%s",e[i].name);
printf("Enter the address of employee : \n");
scanf("%s",e[i].address);
printf("Enter the salary :\n");
scanf("%d",&e[i].salary);
}
for(i=1;i<=5;i++)
{
if(e[i].salary>10000)
{
printf("%s",e[i].name);
}
}
getch();
}
