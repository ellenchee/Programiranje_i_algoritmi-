/*Да се напише функција што ќе одреди колку пати знак се наоѓа во даден стринг
(низа од знаци). Знакот за споредување и стрингот се внесуваат од тастатура. */
#include <stdio.h>
int BrojZnak ( char *str, char znak);
int main ()
{
    char s[50], znak;
    printf("vnesi string: ");
    fflush(stdout);                     //??
    gets(s);
    printf("vnesi znak koj treba da se bara vo stringot: ");
    znak=getchar();
    printf("znakot \"%c\" se pojavuva %d pati vo stringot ", znak, BrojZnak(s, znak)); // %c za char, %s za tekstualni nizi
    return 0;
}
int BrojZnak (char *str, char znak)
{
    int brojac=0;
    while (*str)
    {
        brojac+=(*str==znak); //ako e (*str==znak) true, se dobiva vrednost 1
        str++;  // ovde ne se koristi str kako pointer poso se menuva vrednosta na promenlivata (ne pokazuva kon adresata tuku ima vrednost od stringot)
    }
    return brojac;
}