#include<stdio.h>
#include<conio.h>
#include<string.h>
 struct employe
 {
 char name[40];
 char address[20];
 int salary;
 };
 void main()
 {
 struct employe e[5];
 int i;
 for( i=0;i<5;i++)
 {
 printf("enter the name of employee %d\n",i+1);
 scanf("%s",e[i].name);
 printf(" enter the address=\n");
 scanf("%s",e[i].address);
 printf(" enter the salary=\n");
 scanf("%d",&e[i].salary);
 }
 printf("\n the name of the employees whose salary is above 10000 are=\n");
 for(i=0;i<5;i++)
 {
 if(e[i].salary>10000)
 {
 printf("name=%s\n",e[i].name);
 printf("salary=%d\n",e[i].salary);
 printf("address=%s\n",e[i].address);
 }
 }
 getch();
 }
