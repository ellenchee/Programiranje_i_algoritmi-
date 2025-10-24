/*Да се напише функција која од дадена низа знаци ќе ги исфрли знаците
почнувајќи од n-тиот во должина од k знаци. */
#include <stdio.h>
#include <string.h>
void delc(char *str, int poz, int dolz);
int main ()
{
    int n=50; char s[n]; int poz, dolz;
    printf("vnesi string: "); fflush(stdout); gets(s);
    printf("vnesi pozicija i dolzina: "); fflush(stdout); scanf("%d %d", &poz, &dolz);
    delc(s, poz, dolz);
    printf("noviot string: ");
    puts(s);
    return 0;
}
void delc(char *str, int poz, int dolz)
{
    char *s=str+poz+dolz-1; char *d=str+poz-1;
    int len=strlen(str);
    for (; *s && ((poz+dolz-1)<len); *d++ = *s++);
    *d=0;
}