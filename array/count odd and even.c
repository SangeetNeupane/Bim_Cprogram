#include<stdio.h>
#include<conio.h>
 void main ()
 {
 	int i , num[5],even,odd,count1=0,count2=0 ;
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
                count1=count1+1;
            }
        }
 
        printf("\n Odd numbers in the array are -");
        for (i=0;i<5;i++) 
        {
            if (num[i] % 2 != 0) 
            {
                printf("%d \t",num[i]);
                count2=count2+1;
            }
        }
        printf("\nTotal Numbers of Even= %d",count1);
        printf("\nTotal Numbers of Odd= %d",count2);
        getch();
 
    }
