#include<stdio.h>
#include<conio.h>
void main()
{
    int *a,x,rem=1,i;
    printf("Enter the positive number");
    scanf("%d",&x);
    a=&x;
    for(i=2;i<=*a/2;i++)
    {
        if(*a%i==0)
        {
            rem=0;
        }
    }
    if(*a==1)
    {
        printf("The given number is neither prime nor composite");
    }
    else
    {
        if(rem==1)
        {
         printf("The given number is  prime ");
        }
        else
        {
           printf("The given number is  composite ");
        }
    }
    getch();
}
