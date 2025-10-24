/*Да се напише функција која во стринг што и се предава како влезен параметар
ќе ги промени малите букви во големи и обратно и ќе ги отфрли сите цифри. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void promena(char *str);
int main ()
{
    char s[50];
    printf("vnesi string: ");
    gets(s);
    promena(s);
    printf("noviot string e: ");
    puts(s);
    return 0;
}
void promena(char *str)
{
    int j=0, i=0;
    while (str[i]!='\0') //moze i while(str[i])
    {
        if (!(isdigit(str[i]))) //ako e broj, go preskoknuva
        {
            if(islower(str[i]))
                str[j]=toupper(str[i]);
            else if (isupper(str[i]))
                str[j]=tolower(str[i]);
            else 
                str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
}