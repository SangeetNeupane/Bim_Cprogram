#include<stdio.h>
#include<conio.h>
void main()
{
  int i ,A[5],*B[5];
  printf("Enter the elements : ");
  for(i=1;i<=5;i++)
  {
  scanf("%d",&A[i]);
  }
  for(i=1;i<=5;i++)
  {
   B[i]=&A[i];
  }
  printf("The elements are : ");
  for(i=1;i<=5;i++)
  {
  printf("%d\n",*B[i]);
  }
  getch();
}
