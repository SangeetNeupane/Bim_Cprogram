#include<stdio.h>
#include<conio.h>
 int main ()
 {
 	int i , num[5],even,odd ;
	 printf("enter the 5 number");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&num[i]);
	 }
       printf("Even numbers in the array are - ");
        for(i=0;i<5; i++) 
        {
            if (num[i] % 2 == 0) 
            {
                printf("%d \t",num[i]);
            }
        }
 
        printf("\n Odd numbers in the array are -");
        for (i=0;i<5;i++) 
        {
            if (num[i] % 2 != 0) 
            {
                printf("%d \t",num[i]);
            }
        }
        getch();
 
    }
