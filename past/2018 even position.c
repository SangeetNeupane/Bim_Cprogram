//to add numbers at even position of integer array of size 50//
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[50],i,n,sum=0;
     printf("how many number you want to add");
     scanf("%d",&n);
    printf("enter the numbers");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(i%2==0)
    {
    sum=sum+a[i];
}
}
printf("%d is the sum of array of number",sum);
getch();
}
