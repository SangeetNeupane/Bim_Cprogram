#include <conio.h>
#include <stdio.h>
void main()
{
	int i;
   char alpha='a';
   for(i=1;i<=6;i++)
   {
   	if(i==1||i==4||i==5)
      {
   		printf("%c.BBA\n",alpha);
      }
      else
      {
          printf("%c.BIM\n",alpha);
      }
      alpha++;
   }
   getch();
}
