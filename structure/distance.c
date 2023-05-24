#include<stdio.h>
#include<conio.h>
struct distance
{
	int feet;
	int inch;
};
void main()
{
	int temp,temp1,temp2,temp3,temp4;
	struct distance s ,s1,s2;
	printf("Enter the distance in feet and inches: \n");
	scanf("%d%d",&s1.feet,&s1.inch);
	printf("Enter another distance in feet and inches: \n");
	scanf("%d%d",&s2.feet,&s2.inch);
	temp=(s1.feet)*12;
	temp1=(s2.feet)*12;
	temp2=(s1.inch)+(s2.inch)+temp+temp1;
	temp3=temp2/12;
	temp4=temp2%12;
	printf("The total distance is %d feet and %d inches",temp3,temp4);
	getch();

}
