/*Да се напише програма во која од тастатура ќе се прочита текстуална
низа. Во текстуалната низа треба да се пронајдат сите појавувања на
време (временски термин). Притоа, времето се запишува во формат
XX:XX и истото е во опсег од 00:00 до 23:59. Програмата на крајот
треба да испечати колку различни временски термини се наведени.
Од сите наведени термини да се одреди најдоцниот термин и истиот
да се прикаже на екран.
 Пример:
 Ако е внесена текстуалната низа:
 Predavanjata po PiA pochnuvaat vo 08:00 chasot, a auditoriskite vezhbi
pochnuvaat vo 12:00 chasot. Za laboratoriski vezhbi na raspolaganje ima
tri termini: prviot od 14:00 vo 322A, vtoriot od 15:30 vo 322A i tretiot od
18:30 vo 322A.
 Задачата треба да даде излез на екран:
 Vo tekstot ima navedeno 5 vremenski termini. Najdocniot termin e 18:30.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main ()
{
    char s[250];
    printf("vnesi tekstualna niza ");
    gets(s);
    char *ptr=s;
    int min, h;
    int maxh=0, maxm=0;
    int brojac=0; //gi broe vremenskite termini
    while (*ptr)
    {
        if (isdigit(*ptr) && isdigit(*(ptr+1)) && (*(ptr+2)==':') && isdigit(*(ptr+3)) && isdigit(*(ptr+4))) 
        {
            min=(*(ptr+3)-'0')*10+(*(ptr+4)-'0');
            h=(*(ptr)-'0')*10+(*(ptr+1)-'0');
            if (h>=0 && h<=23 && min>=0 && min<=59)
            {
                brojac++;
                if (h>maxh || (h==maxh && min>maxm))
                {
                    maxh=h; maxm=min;
                }
            }
            ptr+=5;
        }

        else ptr++;
    }
    printf("vo tekstot ima navedeno %d vremenski termini. Najdocniot termin e %d:%d", brojac, maxh, maxm);
    return 0;
}