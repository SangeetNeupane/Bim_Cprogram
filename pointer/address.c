#include<stdio.h>
#include<conio.h>
void main()
{
int a ,*ptr;
printf("Enter the number:-\n ");
scanf("%d",&a);
ptr=&a;
printf("value of %x\n",&a);
printf("value of %d\n",&a);
printf("value of %d\n",ptr);

printf("value of %x\n",ptr);
printf("value of %d\n",*ptr);
printf("value of %d\n",a);
printf("value of %d\n",*(&a));

getch();

}
