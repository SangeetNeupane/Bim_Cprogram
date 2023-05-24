#include<stdio.h>
intt
  int even(int,int);
  void main()
  {
      int a,b;
      printf("enter the range of number");
      scanf("%d%d",&a,&b);
      int Average=even(a,b);
      printf("Average even number =%d",Average);
      getch();
  }
  int even(int a1 , int b1 )
  {
      int i,c=0,sum=0 ;
      for(i=a1;i<=b1;i++)
      {
          if(i%2==0)
          {
              sum =sum + i;
              c++;
          }
      }
          int Average=sum/c;
return Average;


  }
