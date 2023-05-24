#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
int A[]={-3,-4,8,9,10,-17};
for(i=0;i<6;i++)
{
sum=sum+A[i];
}
printf("The sum is %d ",sum);
getch();
}
