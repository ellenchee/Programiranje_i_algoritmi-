/*Да се напише функција што ќе одреди колку пати знак се наоѓа во даден стринг
(низа од знаци). Знакот за споредување и стрингот се внесуваат од тастатура.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int bz(char *str, char znak)
{
    int brojac=0, i=0;
    while (*str!='\0')
    {
        if (*str==znak) brojac++;
        str++; 
    }
    return brojac;
}
int main ()
{
    int n=50; char s[n]; char znak;
    printf("vnesi string ");
    gets(s);
    printf("koj znak da go bara "); znak=getchar();
    //scanf("%d", &znak);
    int br=bz(s, znak);
    printf("znakot e vnesen %d pati", br);
    return 0;
}