#include<stdio.h>
#include<conio.h>
int fabinico(int); /* Function Definition */
void main()
{
    printf("0");
    int i;
 for(i = 1;i <= 10;i++)
    {
        printf("\t%d ",fabinico(i));//
    }

 getch();
}
int fabinico(int i) /* Function Definition */
{
int a;
 if(i==1||i==2)
 {
 return(1);
 }
 else
 {
 a= fabinico(i-1)+fabinico(i-2); /* Recursive Function Call as fact() calls
itself */
 return(a);
 }
}
