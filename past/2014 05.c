#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
    if(i<=4 && j==1)
    {
    printf("* ");
    }
    if(i<=2&&j==2)
    {
    printf("# ");
    }
    if((i==3)&&((j==2)||(j==3)))
    {
    printf("? ");
    }
    if((i==4)&&((j==2)||(j==3)))
    {
    printf("? ");
    }
    if(i==4&&j==4)
    {
    printf("+ ");
    }
}
    printf("\n");
}
getch();
}
