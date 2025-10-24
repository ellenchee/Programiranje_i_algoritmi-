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
#include <ctype.h>
#include <string.h>
int main ()
{
    char s[200];
    printf("vnesi string: ");
    gets(s);
    int iw=0; //inword
    int *ptr=s; //pointer kon stringot 
    int brz=0; // broj na zborovi koi zapocnuvaat so golema bukva
    int max=0; // maksimalen broj na zborovi (brz) vo edna recenica 
    char *pmax=s; //pocetok na rec so max brz
    int brr=0; // broj na recenicata
    char *poc=s; // pokazuvac kon pocetokot na tekovnata recenica
    while (*ptr!='\0')
    {
        if (isalpha(*ptr)) {
            if (iw==0) 
                iw=1; // ja zema samo prvata bukva
                if (isupper(*ptr))
                    brz++; // se zgolemuva brojot na zborovi koi pocnuvaat so golema bukva
        }
        else 
        {
            if (iw==1) //povekje ne e prvata bukva
            iw=0; //pocnue nov zbor 
            if (*ptr=='.' || *ptr=='!' || *ptr=='?') //kraj na recenicata
            {
                printf("vo recenicata broj %d ima %d zborovi koi pocnuvaat na golema bukva\n", brr, brz);
                if (brz>=max)
                {
                    max=brz; //maks brz
                    poc=ptr; //pokazuva kon pocetokot na recenicata so max brz
                }
                brr++; //nova rec
                poc=ptr+1; // pokazuvac kon novata recenica
                brz=0; //reset na broj na zborovi na 0 za vo novata recenica
            }
        }
    }
    printf("recenicata so max brz e: ");
    for (ptr=pmax; *ptr!='.' || *ptr!='!' || *ptr!='?'; ptr++)
    printf("%c", *ptr);
    return 0;
}