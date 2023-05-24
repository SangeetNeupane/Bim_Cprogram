#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i=0,count=0;
 char  ch[100];
 printf("Enter the sentence : ");
 gets(ch);
 while(ch[i]!='\0')
 {
 	if(ch[i]==' ')
 	{
	 
 	count++;
 }
 i++;
 }
 printf("There are %d white spaces in the given sentence.",count);
 getch();
}
