#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int choice, num, i, fact;
printf("1.Factorial : \n");
printf("2.Odd/Even : \n");
printf("3.Exit\n");
printf("\nYour choice :? ");
scanf("%d",&choice);
switch(choice) {
case 1:
printf("\nEnter Number :");
scanf("%d",&num);
fact = 1;
for(i=1;i<=num;i++)
fact = fact * i;
printf("\n Factorial value = %lu\n",fact);
break; // Takes control out of switch
case 2:
printf("\nEnter Number:");
scanf("%d",&num);
if(num %2==0)
printf("\n Even Number.\n");
else 
printf("\nOdd Number.\n");
break; //Takes control out of switch
case 3:
exit(0); //Terminates program execution
}
getch();
}
