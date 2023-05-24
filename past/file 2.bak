#include <stdio.h>
#include <conio.h>
void main()
{
FILE *ptr;
char ch[100];
ptr=fopen("d:\\abc.txt","r");
if(ptr==NULL){
printf("unable to open file");
}
else{
while(!feof(ptr)){
fgets(ch,18,ptr);
printf("%s\n",ch);
}
fclose(ptr);
} }
