/*Да се напишат функција која ќе врати подниза од зададена текстуална низа
определена со позицијата и должината што како параметри се вчитуваат од тастатура.
Поднизата започнува од карактерот што се наоѓа на соодветната позиција во
текстуалната низа броено од лево. */
#include <stdio.h>
#include <string.h>
int main ()
{
    char s[50], pods[50];
    int poz, dolz;
    printf("vnesi go stringot: ");
    gets(s);
    printf("vnesi gi pozicijata i dolzinata: ");
    scanf("%d %d", &poz, &dolz);
    if (poz<=strlen(s))
    {
        strncpy(pods, s+poz-1, dolz);
        *(pods+dolz)=0;
        printf("podniza od dadeniot opseg: ");
        puts(pods);
    }
    else
    {
        printf("pogreshno vnesen podatok.");
    }
    return 0;
}