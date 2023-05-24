#include<stdio.h>
#include<conio.h>  
void main()  
{  
    int a,b,sum=0;  
  
    printf("Enter start and end value\n");  
    scanf("%d%d",&a,&b); 
    printf("\nSum of even numbers from %d to %d is ",a,b);  
    while(a<=b)  
    { 
        if(a%2==0)  
        {  
            sum=sum+a;  
        }  
        a++;  
    }  
    printf("%d\n", sum);  
  	getch();
  }

