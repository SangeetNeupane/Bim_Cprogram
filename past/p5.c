#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char sanu[100];
 int i;
 printf("Enter the string:-");
 gets(sanu);
	
 for(i=0;sanu[i]!='\0';i++)
 {
 	if (sanu[i]>='a'&&sanu[i]<='z')
 	{
 		sanu[i]=sanu[i]-32;
	 }
 }
 printf("%s",sanu);
}
