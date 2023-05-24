#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
   char string1[100];

   printf("Enter a string to reverse\n");
   scanf("%s",string1);

   strrev(string1);

   printf("Reverse of the string: %s\n",string1);

   getch();
}
