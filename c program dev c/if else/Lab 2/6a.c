#include<stdio.h>
#include<conio.h>
void main()
{
	int x=2,z=4,y1,y2,y3,y4,y5,y6,y7;
	y1=x++ + ++x;
	printf("x=2,z=4");
	printf("\ny1=x++ + ++x");
	printf("\ny1=%d",y1);
	y2=++x + ++x;
	printf("\ny2=++x + ++x");
	printf("\ny2=%d",y2);
	y3=++x + ++x + ++x;
	printf("\ny3=++x + ++x + ++x");
	printf("\ny3=%d",y3);
	y4=x>z;
	printf("\ny4=x>z");
	printf("\ny4=%d",y4);
	y5=x>z?x:z;
	printf("\ny5=x>z?x:z");
	printf("\ny5=%d",y5);
	y6=x&z;
	printf("\ny6=x&z");
	printf("\ny6=%d",y6);
	y7=x>>2 + z<<1;
	printf("\ny7=x>>2 + z<<1");
	printf("\ny7=%d",y7);
	getch();
}
	
