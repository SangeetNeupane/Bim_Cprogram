#include <stdio.h>
#include <conio.h>
void main()
{
FILE *ptr;
char name[20];
int age,salary;
ptr=fopen("e:\\name.txt","w");
if(ptr==NULL){
printf("unable to open file");
}
else{
printf("Enter name,age,salary\n");
scanf("%s%d%d",&name,&age,&salary);
fprintf(ptr,"%s\n%d\n%d\n",name,age,salary);
fclose(ptr);
}
getch();
}