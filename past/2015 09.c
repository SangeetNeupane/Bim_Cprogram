#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
	char name[50];
	int age;
};
   void main()
   {
   	struct emp e[5];
   	int a=0, i,avg;
   	for(i=1;i<=5;i++)
   	{
   		printf("The data of the employee %d \n\n",i);
   		printf("Enter the name : ");
   		scanf("%s",&e[i].name);
   		printf("Enter the age : ");
   		scanf("%d",&e[i].age);
	}   
	for(i=1;i<=5;i++)
	{
		a=a+e[i].age;
			
    }
    avg=a/5;
   printf("The average age of employees : %d",avg);
}
