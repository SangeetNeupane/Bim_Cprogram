#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Bill
{
	char shopname[50];
	char address[50];
	int contact;
	char item[50];
	int quantity;
	int rate;
	int discount;
	int total;
	int temp;
	int temp1;
};
void main()
{
	struct Bill abc;
	printf("Enter the name of shop : \n");
	gets(abc.shopname);
	printf("Enter the address of the shop : \n");
	gets(abc.address);
	printf("Enter the contact no. of shop : \n");
	scanf("%d",&abc.contact);
	printf("Enter the name of item : \n");
	gets(abc.item);
	printf("Enter the rate of item : \n");
	scanf("%d",&abc.rate);
	printf("Enter the quantity of item : \n");
	scanf("%d",&abc.quantity);
	printf("Enter the discount percent: \n");
	scanf("%d",&abc.discount);
	abc.temp=((abc.quantity)*(abc.rate));
	abc.temp1=(((abc.discount)/100)*(abc.temp));
	abc.total=(abc.temp)-(abc.temp1);
	printf("\n\n");
	printf("The name of the shop is %s\n",abc.shopname);
	printf("The address of the shop is %s\n",abc.address);
	printf("The contact of the shop is %d\n",abc.contact);
	printf("The name of the items is %s\n",abc.item);
	printf("The quantity of item is %d\n",abc.quantity);
	printf("The rate of the item is %d\n",abc.rate);
	printf("The discount percent is %d\n",abc.discount);
	printf("The total amount is %d\n",abc.total);
	getch();	
}
