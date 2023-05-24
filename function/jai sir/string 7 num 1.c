#include <stdio.h>
#include <string.h>
void My_String();
void main()
{
    My_String();
    getch();
}
void My_String()
{
    char str[10];
    int len,mid;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    if(len==7)
    {
        mid = len/2;
        printf("%c",str[mid]);
    }
    else
    {
        printf("\nString is not of length 7");
    }

}
