
#include<stdio.h>
#include<conio.h>
void main()
{
	char rz;
	printf("Name of our friends:-");
	printf("\nEnter the number of our Friends(a-c):-\n");
	scanf("%c",&rz);
	switch(rz)
	{
		case 'a':
			printf("Reeza");
			break;
		case 'b':
			printf("Ravi");
			break;
		case 'c':
			printf("Sangeet");
			break;
		default :
		printf("They are not our friend");
			
	}
	getch();
}
