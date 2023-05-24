#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
	FILE *ptr;
   char name[20];
   int age;
   
   char address[50];
   ptr=fopen("C:\\student_details.txt","a");
   if(ptr==NULL)
   {
   	printf("File doesnt");
      exit(1);
   }
   printf("Enter the student name");
   scanf("%s",&name);
   printf("Enter the student age");
   scanf("%d",&age);
   printf("Enter the address");
   scanf("%s",&address);
   fprintf(ptr,"Student Name:%s",name);
   fprintf(ptr,"student age:%d",age);
   fprintf(ptr,"student address:%s",address);
   fclose(ptr);
   getch();
   }