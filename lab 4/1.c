#include<stdio.h>
#include<conio.h>
void main()  
{  
    int num=1,i;  
    float y=0.0,fact;  
  
    while(num<=10)  
    {  
        fact=1;  
        for(i=1;i<=num;i++)  
        {  
            fact=fact*i;  
        }  
  
        y=y+(num/fact);  
        num++;  
    }  
    printf("Sum of series y= %f\n",y);  
    getch();  
}  
