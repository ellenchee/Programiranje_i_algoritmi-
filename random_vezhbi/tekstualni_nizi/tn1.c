/*Да се напише функција која од низата знаци ќе ги отстрани бланко (whitespace)
знаците што се наоѓаат на крајот од низата. */
#include <stdio.h>
#include <ctype.h>
void odstrani (char *str); // gi otstranuva praznite mesta vo nizata
int strlen (const char *s); // gi broi znacite shto se vneseni vo nizata
int main ()
{
    char s[50], ch;
    int i=0;
    while ((i<50-1) && ((ch=getchar())!='\n'))
        s[i++]=ch;
    s[i]='\0';
    printf("Vnesenata tekstualna niza e \"%s\".\n", s); 
    odstrani(s);
    printf("tekstualnata niza po izvrshenite promeni e \"%s\".\n", s);
    return 0;
}
int strlen(const char *s)
{
    int n;
    for(n=0; *s!='\0' ;s++) // se zgolemuva n se dodeka ne stigne do \0 (null terminatorot) vo nizata
        n++;
    return n; // vrakja dolzina na nizata
}
void odstrani (char *str)
{
    int i;
    i = strlen(str); // se dobiva dolzinata na nizata
    for (i--; i>=0 && isspace(str[i]); i--) // proveruva dali tekovniot karakter e prazen prostor, proveruva preku isspace
    {
    }
    str[i+1] = '\0'; // stava null terminator na posledniot neprazen karakter
} // odzema prazni mesta od krajot na tekstualnata niza

// za broenje na znacite vo nizata moze da se iskoristi naredbata strlen() [strlen(nizata)], od bilbiotekata <string.h>
// ne go broi null terminatorot 