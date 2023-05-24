#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Result
{
	char name[50];
	int rollno;
	char address[50];
	int contactno;
	int marks;
};
void main()
{
	struct Result st[5];
	int temp=0,tem;
	int i,j;
   char subject[10];
	for(i=0;i<2;i++)
	{


		printf("Enter the data of student no %d\n",i+1);
		printf("Enter the name of student : \t");
		gets(st[i].name);
		printf("Enter the roll no. of student : \t");
		scanf("%d",&st[i].rollno);
		printf("Enter the address of student : \t");
		gets(st[i].address);
		printf("Enter the contact no of student : \t");
		scanf("%d",&st[i].contactno);
		for(j=0;j<2;j++)
		{
			printf("Enter the subject : \t");
			gets(subject);
		    printf("Enter the marks of %s subject\t",subject);
		    scanf("%d",&st[i].marks);
		    temp=temp+(st[i].marks);
		    tem=(temp*100)/500;
		}
	}
	printf("\n\n");
	printf("Displaying the results : \n");
	for(i=0;i<2;i++)
	{
		printf("The name of the student is %s\n",st[i].name);
		printf("The roll no. is %d\n",st[i].rollno);
		printf("The address is %s\n",st[i].address);
		printf("The contact no. is %d\n",st[i].contactno);
		for(j=0;j<2;j++)
		{
		printf("The marks are %d \n",st[i].marks);
		}
		printf("The percentage of %s is %d ",st[i].name,tem);
	}
	getch();
}
