#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Book
{
char title[50];
char author[50];
char publication[50];
char content[50];
int page;
};
void main()
{
    struct Book sanu;
printf("Enter the title of book:\n");
gets(sanu.title);
printf("Enter the author of book:\n");
gets(sanu.author);
printf("Enter the publication of book:\n");
gets(sanu.publication);
printf("Enter the content of book:\n");
gets(sanu.content);
printf("Enter the page of book:\n");
scanf("%d",&sanu.page);
printf("\n\n");
printf("The title of book is %s\n",sanu.title);
printf("The author of book is %s\n",sanu.author);
printf("The publication of book is %s\n",sanu.publication);
printf("The content of book is %s\n",sanu.content);
printf("The page no of book is %d\n",sanu.page);
getch();
}
