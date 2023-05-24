#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,note1,note2,note5,note10,note20,note50,note100,note500,note1000;
	printf("Enter the amount:-");
	scanf("%d",&amount);
	if(amount>=1000)
	{
	  note1000=amount/1000;
      amount=amount-(note1000*1000);
	}
	else if(amount>=500)
	{
	  note500=amount/500;
      amount=amount-(note500*500);
	}
	else if(amount>=100)
	{
	  note100=amount/100;
      amount=amount-(note100*100);
	}
	else if(amount>=50)
	{
	  note50=amount/50;
      amount=amount-(note50*50);
	}
	else if(amount>=20)
	{
	  note20=amount/20;
      amount=amount-(note20*20);
	}
	else if(amount>=10)
	{
	  note10=amount/10;
      amount=amount-(note10*10);
	}
	else if(amount>=5)
	{
	  note5=amount/5;
      amount=amount-(note5*5);
	}
	else if(amount>=2)
	{
	  note2=amount/2;
      amount=amount-(note2*2);
	}
	else 
	{
	  note1=amount;
      }
	printf("Note1000=%d",note1000);
	printf("\nNote500=%d",note500);
	printf("\nNote100=%d",note100);
	printf("\nNote50=%d",note50);
	printf("\nNote20=%d",note20);
	printf("\nNote10=%d",note10);
	printf("\nNote5=%d",note5);
	printf("\nNote2=%d",note2);
	printf("\nNote1=%d",note1);
	getch();
}
