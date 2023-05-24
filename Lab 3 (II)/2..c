#include <stdio.h>
#include<conio.h>
void main()
{
  char al;
  printf("To check given character is vowel or consonant \n");
  printf("Please enter a character\n");
  scanf("%c", &al);
 
  if (( al>= 'a' && al <= 'z') || (al >= 'A' && al <= 'Z')) 
  {
    if (al=='a' || al=='A' || al=='e' || al=='E' || al=='i' || al=='I' || al=='o' || al=='O' || al== 'u' || al=='U')
     { printf("Given Character %c is a vowel.\n", al);}
    else
     { printf("Given Character %c is a consonant.\n", al);}
  }
  else
    {
	printf("Given Character %c is neither a vowel nor a consonant.\n",al);
}
  getch();
}
