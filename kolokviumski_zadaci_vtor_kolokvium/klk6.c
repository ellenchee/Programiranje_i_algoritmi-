#include <stdio.h>
#include <ctype.h>
#define MAXELEM 50
void RemoveTrail(char *str);
int strlen(const char *s);
int main ()
{
char s[MAXELEM], ch;
int i = 0;
while((i<MAXELEM-1) && ((ch=getchar())!='\n'))
 s[i++] = ch;
 s[i] = '\0';
 printf("Vnesenata tekstualna niza e \"%s\".\n", s);
 RemoveTrail(s);
 printf("Tekstualnata niza po izvrsenite promeni e \"%s\".\n", s);
return 0;
}
int strlen(const char *s)
{
int n;
for(n=0; *s!='\0' ;s++)
 n++;
return n;
}
void RemoveTrail(char *str)
{
int i;
 i = strlen(str);
for (i--; i>=0 && isspace(str[i]); i--)
 {
 }
 str[i+1] = '\0';
} 