#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int a[5],i,n;
   int *p;
   printf("Enter the value");
   scanf("%d",&n);
   p=(int*)calloc(n,sizeof(int));
   for(i=0;i<n;i++)
   {
   	scanf("%d",p+i);

   }
   for(i=0;i<n;i++)
   {
   	printf("%d\t",p[i]);
   }
   getch();
}