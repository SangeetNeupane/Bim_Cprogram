#include<stdio.h>
#include<string.h>
#include <conio.h>
struct Student
{
    char name[50];
    int age;
    char branch[50];
    //F for female and M for male
    char gender;
    char reg_no[20];
}st;

void main()
{

    printf("Enter the student name");
    gets(st.name);
    printf("enter the age");
    scanf("%d",&st.age);
    printf("Enter the branch");
    gets(st.branch);
    printf("Enter the gender");
    scanf("%c",&st.gender);
    printf("Enter the regestrat+ion number");
    gets(st.reg_no);
    printf("\nstudent Name : %s",st.name);
    printf("\n Age : %d",st.age);
    printf("\nBranch :%s",st.branch);
    printf("\n gender : %s",st.gender);
    printf("\nRegistration Number :%s",st.reg_no);
    getch();
}
