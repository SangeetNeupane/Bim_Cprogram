#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[50];
int c,z;
printf("Enter the string:-\n\n");
gets(str);
printf("%s",str);
for(c=0;c!='\0';c++)
{
	z=0;
 if((str[c]=='a')||(str[c]=='A')||(str[c]=='e')||(str[c]=='E')||(str[c]=='i')||(str[c]=='I')||(str[c]=='o')||(str[c]=='O')||(str[c]=='u')||(str[c]=='U'))
{
	z=z+1;
	printf("%d",z);
}
}
printf("\nThe number of vowel is %d",z);
getch();

}
