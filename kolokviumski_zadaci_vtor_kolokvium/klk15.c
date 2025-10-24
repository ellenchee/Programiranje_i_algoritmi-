#include <stdio.h> // ne mi e sigurna dal e okej me mrzi da ja proveruem
#include <ctype.h>
#include <string.h>
/*Да се напише функција која од дадена
влезна низа од знаци ќе ги оддели
цифрите при што ќе ги смести во друга
дадена низа од цели броеви (функцијата
на влез добива низа од знаци, должина на
низата и низа од цели броеви). Добиената
низа со цифри да се сортира во растечки
редослед. Да се искористи функција со
покажувачи.
 Пример:
 Влез: PiA2024kolokvium2
 Излез: 0 2 2 2 4*/
void funk(char *tekst,int *n,int a[])
{
 char *p=tekst;
 *N=0;
 int i;
 while(*p!='\0'){
 if(isdigit(*p))
 {
    a[i]=*p-'0';
   i++;
 }
  p++;
 }
 *N=i

}
int main()
{
    int n;
    char tekst[];
    gets(tekst);
    int niza[];
    funk(tekst,n,niza);
    for (int i=0;i<n,i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (niza[i]>niza[j])
            {
                int pom=niza[i];
                niza[i]=niza[j]
                niza[j]=pom
            }
        }
    }

}