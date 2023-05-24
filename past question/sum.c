//sum of following--3,-,-4,8,9,10,-17
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[]={-3,-4,8,9,10,-17};
     int i;
     int sum;
   printf("sum of following numbers \n");
    for(i=0;i<6;i++)
{
    printf("%d\n",a[i]);
    }
    for(i=0;i<6;i++)
    {
        sum=sum+a[i];
    }
    printf("%d is the sum of numbers",sum);
    getch();
}
