/*Да се напише програма која за дадена низа од знаци (внесена од тастатура) ќе
провери дали е палиндром (исто се чита и од десно на лево и од лево на десно). Од
внесениот збор, пред проверката дали е палиндром, да се исфрлат празните места и да
не се прави разлика помеѓу мали и големи букви. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void pm (char *str);
int proverka(char *str);
int main ()
{
    char s[50];
    printf("vnesi string: ");
    gets(s);
    if (proverka(s)) printf("da");
    else printf("ne");
    return 0;
}
void pm(char *str)
{
    char *a=str, *b=str;
    while (*a)
    {
        if(isalpha(*a)) //samo bukvi, bez brojki, bez prazni mesta
        {
            if(isupper(*a))
                *b=tolower(*a); // od golemi u mali
            else 
                *b=*a; // ako se mali ostanuaa
            b++; // se zgolemuva za eden za da se prefrlime na narednata pozicija
        }
        a++;
    }
    *b=0; //kraj na string
}
int proverka(char *str)
{
    int palin=1, i, len;
    pm(str);
    len=strlen(str);
    for (i=0; i<(len/2); i++)
        if (*(str+i)!=*(str+len-i-1)) 
            palin=0;
    return palin;
}