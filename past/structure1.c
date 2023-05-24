#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct emp
{
	char name[20];
	int age;
	char address[20];
};
 void main()
 {
 	struct emp e[5];
 	int i;
 	for(i=1;i<=5;i++)
	 {
	 	printf("Enter the name : ");
	 	scanf("%s",&e[i].name);
	 	printf("Enter the age : ");
	 	scanf("%d",&e[i].age);
	 	printf("Enter the address : ");
	 	scanf("%s",&e[i].address);
	 }
	for(i=1;i<=5;i++)
	    {
	    	printf("The details of employee %d are :\n",i);
	    	printf("Name : %s\n",e[i].name);
	    	printf("Age : %d\n",e[i].age);
	    	printf("Address : %s\n\n",e[i].address);
		}
		getch();
 }
