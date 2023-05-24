#include <stdio.h>
#include <conio.h>

void sum(int );
void main()
{
  int n;

  printf("How many number : ");
  scanf("%d", &n);
  sum(n);
  getch();
}
void sum(int a)
{

  int i, add=0;

  for(i=1; i<=a; i++)
  {
    add=add+i;
  }
  printf("The sum upto %d numbers is %d ",a,add);
}
