#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("Enter the A matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the B matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\nA matrix is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("\nB matrix is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
printf("The sum of two matrix:\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
getch();
}
