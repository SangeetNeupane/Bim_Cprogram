#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  FILE *s;
  int age;
  double ph;
  char name[20];
  char address[20];
  char ad[20]="pokhara";
  s=fopen("E:\\san.txt","a");
  printf("Enter the name : ");
  gets(name);
  printf("Enter the age : ");
  scanf("%d",&age);
  printf("Enter the ph number : ");
  scanf("%lf",&ph);
  printf("Enter the address : ");
  scanf("%s",address);
  if(strcmp(address,ad)==0)
  {
  	fprintf(s,"Name : %s\n",name);
  	fprintf(s,"Age : %d\n",age);
  	fprintf(s,"Ph no. : %lf\n",ph);
  	fprintf(s,"Address : %s\n",address);
  }
  else	
  {
  	printf("Student is not from Pokhara.");
  }
  fclose(s);
  getch();
}
