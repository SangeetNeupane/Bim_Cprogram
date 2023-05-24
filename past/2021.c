#include<stdio.h>
#include<conio.h>
void main()
{
  int i,A[10],l,s;
  printf("Enter the elements : \n");
  for(i=1;i<=10;i++)
  {
    scanf("%d",&A[i]);
  }
    l=s=A[0];
    for(i=1;i<=10;i++)
    {
      if(A[i]>l)
      {
        l=A[i];
      }

       if(A[i]<s)
       {
       s=A[i];
       }
     }

     printf("The number with maximum value is %d\n",l);
     printf("The number with minimum value is %d",s);
     getch();
     }
