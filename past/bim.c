#include <stdio.h>
int main()
{
	char character;
	for(character='a';character<='f';character++)
	{
		printf("%c.",character);
		if(character=='a' || character=='d'|| character=='e')
		{
			printf("BBA");
			printf("\n");
		}
		else if(character=='b'|| character=='c'|| character=='f')
		{
			printf("BIM");
			printf("\n");
		}
		else
		{
			printf("invalid choice");
		}
	}
