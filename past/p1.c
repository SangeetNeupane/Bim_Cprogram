#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *s;
	char name[20];
	char address[20];
	int age;
	double ph;
	char ad[20]="Birgunj";
	s=fopen("E:\\Birgunj.txt","a");
	printf("Enter the name : ");
	scanf("%s",&name);
	printf("Enter the address : ");
	scanf("%s",&address);
	printf("Enter the age : ");
	scanf("%d",&age);
	printf("Enter the ph number : ");
	scanf("%lf",&ph);
	if(strcmp(address,ad)==0)
	{
		fprintf(s,"Name=%s\n",name);
		fprintf(s,"Address=%s\n",address);
		fprintf(s,"Age=%d\n",age);
		fprintf(s,"Ph no=%lf\n",ph);
	}
	fclose(s);
	getch();
}
