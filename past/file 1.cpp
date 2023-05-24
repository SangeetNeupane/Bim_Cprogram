#include <stdio.h>
#include <conio.h>
void main()
{
FILE *ptr;
char ch[100];
int i;
ptr=fopen("e:\\abc.txt","w");
if(ptr==NULL){
printf("unable to open file");
}
else{
printf("ENter a line of text\n");
gets(ch);
fputs(ch,ptr);
fclose(ptr);
}
}