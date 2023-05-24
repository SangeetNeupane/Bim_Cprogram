#include <conio.h>
  #include <stdio.h>
union item
{
    int a;
    float b;
    char ch[10];
};

void main( )
{
    union item it;
    printf("Enter the item no.:");
    scanf("%d",&it.a);
    printf("Enter the item price:");
    scanf("%f",&it.b);
    printf("Enter the item Name:");
    scanf("%s",&it.ch);
    printf("%d\n", it.a);
    printf("%f\n", it.b);
    printf("%s\n", it.ch);

    getch();
}
