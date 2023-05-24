#include<stdio.h>
#include<conio.h>
#include<string.h>
  void main ()
{
char a[20],b[20],temp[20];
printf("Enter the first string\n");
scanf("%s",a);
printf("Enter the second string\n");
scanf("%s",b);
strcpy(temp,a);
strcpy(a,b);
strcpy(b,temp);
printf("\na=%s \nb=%s",a,b);
getch();
}

