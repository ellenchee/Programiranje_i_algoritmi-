/*Да се напише функција која во стринг што и се предава како влезен параметар
ќе ги промени малите букви во големи и обратно и ќе ги отфрли сите цифри. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void funk(char *str);
int main ()
{
    char s[50];
    printf("vnesi string "); 
    gets(s);
    funk(s);
    printf("noviot string e: %s", s);
    return 0;
}
void funk(char *str)
{
    int i=0, j=0;
    while (str[i])
    {
        if(!isdigit(str[i]))
        {
            if (isupper(str[i])) str[j]=tolower(str[i]);
            else if (islower(str[i])) str[j]=toupper(str[i]);
            else str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
}