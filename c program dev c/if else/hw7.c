#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("Enter the Character:-");
	scanf("%c",&c);
if(c>='a' && c<='z'||c>='A'&&c>='Z')
{
printf("%c is alphabet",c);
}
else
{
printf("%c is not alphabet",c);
}
getch();
}
