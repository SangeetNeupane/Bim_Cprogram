#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *s;
	int i;
	char name[20],address[20],ad[20]="kathmandu";
	s=fopen("E:\\name.txt","w");
	for(i=1;i<=5;i++)
	{
		printf("Enter the name : ");
		scanf("%s",&name);
		printf("Enter the address :");
		scanf("%s",&address);
		if(strcmp(address,ad)==0)
		{
			fprintf(s,"Name : %s\n",name);
		}
	
	}
	fclose(s);
	getch();
}
