#include<stdio.h>
#include<conio.h>
int oddeven(int);
void main()
{
  int num,o,*a;
  printf("Enter the number : ");
  scanf("%d",&num);
  a=&num;
  o=oddeven(*a);
  if(o==0)
  {
  	printf("The number is even.");
  }
  else
  {
  	printf("The number is odd.");
  }
  getch();
}
  int oddeven(int num1)
  {
  	if(num1%2==0)
  	{
  	 return 0;
    }
    else
    {
    	return 1;
	}
  }
