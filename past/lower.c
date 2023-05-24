#include <stdio.h>
#include<conio.h>
#include <string.h>

void main() 
{
   char s[100];
   int i;
   printf("\nEnter a upper string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) 
   {
      if(s[i] >= 'A' && s[i] <= 'Z') 
	  {
         s[i] = s[i] + 32;
      }
   }
   printf("\nString in lower Case = %s", s);
   getch();
}
