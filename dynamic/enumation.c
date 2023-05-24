#include <stdio.h>
#include <conio.h>
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

void main()
{
    // creating today variable of enum week type
    enum week today;
    today = Wednesday;
    printf("Day %d",today+1);
    getch();
}