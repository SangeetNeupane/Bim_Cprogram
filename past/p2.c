#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *s;
	int i;
	int array[]={-2,-8,-99,-100,101,20,21,-9,1000,10};
	s=fopen("E:\\integer.txt","w");
	for(i=0;i<10;i++)
	{
		fprintf(s,"%d\n",array[i]);
		printf("%d, ",array[i]);
		
	}
	fclose(s);
	getch();
}
