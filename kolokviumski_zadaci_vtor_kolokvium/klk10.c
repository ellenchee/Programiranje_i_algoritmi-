/*. Да се напише програма која за дадена низа од знаци (внесена од тастатура) ќе
провери дали е палиндром (исто се чита и од десно на лево и од лево на десно). Од
внесениот збор, пред проверката дали е палиндром, да се исфрлат празните места и да
не се прави разлика помеѓу мали и големи букви. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void prom(char *str);
int funk(char *str);
int main ()
{
    char s[50];
    printf("vnesi string "); 
    gets(s);
    if (funk) printf("polindrom");
    else printf("ne");
    return 0;
}
void prom(char *str)
{
    char *a=str, *b=str;
    while (*a)
    {
        if (isalpha(*a))
        {
            if (isupper(*a)) *b=tolower(*a);
            else *b=*a;
            b++;
        }
        a++;
    }
    *b=0;
}
int funk (char *str)
{
    prom(str);
    int len=strlen(str);
    for (int i=0; i<=len/2; i++)
        if(*(str+i)!=*(str+len-1-i)) return 0;
    return 1;
}