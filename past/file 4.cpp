#include <stdio.h>
#include <conio.h>
void main()
{
FILE *ptr;
char name[20];
int age,salary;
ptr=fopen("e:\\name.txt","r");
if(ptr==NULL){
printf("unable to open file");
}
else{
while(!feof(ptr)){
fscanf(ptr,"%s\n%d\n%d\n",&name,&age,&salary);
printf("%s\t%d\t%d\n",name,age,salary);
}
fclose(ptr);
}
getch();
}