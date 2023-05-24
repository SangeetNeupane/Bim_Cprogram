#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int roll;
	int marks;
	char address[20];
};
void main()
{
	FILE *a;
	struct student s;
	int i;
	a=fopen("E:\\ student_struct.txt","w");
	for(i=0;i<2;i++)
	{
		printf("Enter the name : ");
		scanf("%s",&s.name);
		printf("Enter the roll : ");
		scanf("%d",&s.roll);
		printf("Enter the marks :");
		scanf("%d",&s.marks);
		printf("Enter the address :");
		scanf("%s",&s.address);

	    fprintf(a,"Details of student %d\n\n\n",i+1);
		fprintf(a,"Name is %s\n",s.name);
		fprintf(a,"Roll no is %d \n",s.roll);
		fprintf(a,"Marks is %d \n",s.marks);
		fprintf(a,"Address is %s \n\n\n",s.address);
	}
	fclose(a);
	getch();
}
