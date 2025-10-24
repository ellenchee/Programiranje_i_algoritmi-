#include <stdio.h>
#include <string.h>
#include <ctype.h>
void rem(char *str);
int main ()
{
    int n=50; char s[n];
    printf("vnesi string: ");
    gets(s);
    printf("vneseno: \"%s\".", s);
    rem(s);
    printf("promena: \"%s\".", s); 
    return 0;
}
void rem (char *str)
{
    int i;
    i=strlen(str);
    for (i--; i>=0 && isspace(str[i]); i--)
    {}
    str[i+1]='\0';
}