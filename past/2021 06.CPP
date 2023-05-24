                          #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char name[50];
   char address[20];
   char address1[20]="pokhara";
   double phone;
   int age;
	FILE *s;
	s=fopen("E:\\Students details.txt","w");
if(s== NULL)
{
   printf("Error!");
   exit(1);
   }

   printf("Enter the name of student:\n");
   scanf("%s",&name);
   printf("Enter the address:\n");
   scanf("%s",&address);
   printf("Enter the phone number:\n");
   scanf("%lf",&phone);
   if(strcmp(address,address1)==0)
   {
   fprintf(s,"Names list of students who are from pokhara:\n %s \n",name);
   printf("Names list of students who are from pokhara:\n %s \n",name);
   }
   fclose(s);
   getch();
   }
