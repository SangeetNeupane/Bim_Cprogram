#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
	char name[20];
	int age;

	
};
void main()
{
	struct emp e[5];
	int i;
	for (i=1;i<=5;i++)
	{
		printf ("Enter the  data of Emp %d\n\n",i);
		printf("Enter the name & age:  ");
		scanf("%s %d",&e[i].name,&e[i].age);
	}
	for (i=1;i<=5;i++)
	{
		printf ("The  data of Emp %d\n\n");
		printf("Name = %s \n Age = %d ",e[i].name,e[i].age);
	}
	getch();
	
}

