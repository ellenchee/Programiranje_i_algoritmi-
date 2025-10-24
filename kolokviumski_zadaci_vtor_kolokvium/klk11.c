/*Да се напише програма во која од тастатура ќе се прочита текстуална низа. Текстуалната низа е
составена од повеќе реченици, при што секоја реченица завршува со еден од трите
интерпункциски знаци (‘.’, ‘!’, ‘?’). Програмата треба во секоја засебна реченица да го одреди
бројот на зборови кои почнуваат со голема буква и истиот да го прикаже на екран.
Дополнително, откако ќе се провери секоја реченица, на екран да се прикаже реченицата која го
има најголемиот број на зборови што почнуваат со голема буква. Доколку постојат две или
повеќе реченици кои имаат ист број на зборови кои го задоволуваат условот и воедно тој е
максималниот број на зборови на ниво на реченица во текстот, да се испечати последната
реченица која го задоволува условот.
 Пример:
 Ако е внесена текстуалната низа:
 Postoi prichina zoshto 150 kilometri pomegju Kolumbija i Panama se smetaat za najopasniot pat na
svetot. Imeno, dzunglata Darien krie zakani od razlichen vid, a voedno nema nachin da se pobara
pomosh. Megjutoa, toa ne gi sprechuva avanturistite, megju koi i Jan Filip Braunish, da ja isprobaat
srekjata.
 Задачата треба да даде излез на екран:
 Vo prvata rechenica ima 3 zbora koi pochnuvaat so golema bukva. Vo vtorata rechenica ima 2 zbora koi
pochnuvaat so golema bukva. Vo tretata rechenica ima 4 zbora koi pochnuvaat so golema bukva.
 Rechenicata so najgolem broj na zborovi koi pochnuvaat so golemi bukvi e: Megjutoa, toa ne gi
sprechuva avanturistite, megju koi i Jan Filip Braunish, da ja isprobaat srekjata.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
    char s[300];
    printf("vnesi string: "); 
    gets(s);
    int brz=0; //broj na zborovi
    int brr=1; //broj na tekovna recenica
    int iw=0; //inword
    int max=0; //maks broj na zborovi vo edna rec
    char *ptr=s; 
    char *maxp;
    char *poc=s; //pokazuva kon pocetokot na recenicata
    while (*ptr)
    {
        if (isalpha(*ptr))
        {
            if (iw==0)
            {
                iw=1;
                if(isupper(*ptr)) brz++;
            }
        }
        else 
        {
            if (iw==1)
            {
                iw=0;
            }
            if (*ptr=='.' || *ptr=='?' || *ptr=='!')
            {
                printf("vo recenicata br %d ima %d zborovi koi pocnuvaat so golema bukva", brr, brz);
                if (brz>max)
                {
                    max=brz;
                    maxp=poc;
                }
                brr++;
                brz=0;
                poc=ptr+1;
            }
        }
    }
    printf("recenicata so najgolem broj na zborovi koi zapocnuvaat so golema bukva e ");
    for (ptr=maxp; *ptr!='.' || *ptr!='!' || *ptr!='?'; ptr++)
        printf("%c", *ptr);
    return 0;
}