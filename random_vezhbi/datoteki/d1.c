/*1. Да се напише програма која за дадена текстуална датотека чие име се внесува преку
командна линија, ќе го одреди односот на самогласките и согласките. */
#include <stdio.h>
#include <ctype.h>
int Samoglaska(char k){
switch (k){
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': return 1 ;
 default: return 0;
 }
}
int main(int argc,char *argv[]){
char c;
int brsogl=0, brsamogl=0;
 FILE *dat;
if((dat=fopen(argv[1],"r"))==NULL){
 fprintf(stderr,"Ne mozam da ja otvoram datotekata %s",argv[1]);
 return -1;
 }
while((c=fgetc(dat))!=EOF) /* citaj znak po znak se do krajot */
 {
 if (isalpha(c)){
 if (Samoglaska(c)) brsamogl++;
 else brsogl++;
 }
 }
 printf("Odnosot samoglaski/soglaski = ");
 printf("%d/%d=%5.2f\n",brsamogl, brsogl, (float)brsamogl/brsogl);
return 0;
}