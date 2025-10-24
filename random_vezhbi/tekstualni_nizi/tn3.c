/*Да се напише функција која од дадена низа знаци ќе ги исфрли знаците
почнувајќи од n-тиот во должина од k знаци. */
#include <stdio.h>
#include <string.h>
void deletec(char *str, int n, int l); //stringot, n=broj na klk znaci treba da se isfrlat, l=dolzina na nizata
int main ()
{
    char s[50]; int poz, dolz;
    printf("vnesi go stringot: ");
    gets(s); //fgets(s, sizeof(s), stdin); pobezbedna alternativa, se vnesuva znaci dur ima prostor, pr50 se vnesuvaat 49 znaci + null terminator
    printf("vnesete od koja pozicija i kolku znaci da se isfrlat: ");
    scanf("%d %d", &poz, &dolz);
    deletec(s, poz, dolz);
    printf("noviot string e: ");
    puts(s);
    return 0;
}
void deletec(char *str, int n, int l)
{                      // se koristi str+...-1 poradi toa shto deklariraniot char e pointer, a pointeri i normalni vrednosti ne moze direktno da se meshaat (zatoa ne moze *d=n)
    char *s=str+n+l-1; // pokazuva na pozicijata do kade shto treba da se brishat znacite *s=stringot+pozicija+dolzina-1
    char *d=str+n-1;   // pokazuva na pozicija kade shto treba da zapocne brishenjeto *d=stringot+pozicija-1; 
    int dolzn=strlen(str);
    for (; *s && ((n+dolzn-1)<l); *d++ = *s++); // *s i *s++ od pocetok na stringot do null terminatorot  // 
    *d=0;
}
/*while (*str)
brojac++;
str++; */ // broi kolku znaka ima vneseno u stringot (od pocetok do null terminatorot) -- isti kurac ko strlen od bilbioteka string.h