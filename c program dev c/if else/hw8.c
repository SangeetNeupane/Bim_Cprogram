#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter the alphabet:-");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')&&(ch=='a'))
{
printf("%c is a vowel",ch);
}
else if((ch>='a'&&ch<='z')&&(ch=='e'))
{
printf("%c is a vowel",ch);
}
else if((ch>='a'&&ch<='z')&&(ch=='i'))
{
printf("%c is a vowel",ch);
}
else if((ch>='a'&&ch<='z') && (ch == 'o'))
{
printf("%c is a vowel",ch);
}
else if ((ch>='a'&&ch<='z')&&(ch=='u'))
{
printf("%c is a vowel",ch);
}
else 
{
printf("%c is consonant",ch);
}
getch();
}
