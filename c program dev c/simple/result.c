#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h,totalmark;
	float averagemark,percentage;
	printf("Enter the value of English:-");
	scanf("%d",&a);
	printf("\nEnter the value of Math:-");
	scanf("%d",&b);
	printf("\nEnter the value of Science:-");
	scanf("%d",&c);
	printf("\nEnter the value of Social:-");
	scanf("%d",&d);
	printf("\nEnter the value of Account:-");
	scanf("%d",&e);
	printf("\nEnter the value of Nepali:-");
	scanf("%d",&f);
	printf("\nEnter the value of OPT:-");
	scanf("%d",&g);
	printf("\nEnter the value of EPH-");
	scanf("%d",&h);
    totalmark=a+b+c+d+e+f+g+h;
    averagemark=totalmark/8;
    percentage=(totalmark*100)/800;
	printf("\n Total Mark of Sangeet is =%d",totalmark);
	printf("\n Average Mark of Sangeet is =%.2f",averagemark);
	printf("\n Percentage of Sangeet is =%.2f",percentage);
	getch();
}
