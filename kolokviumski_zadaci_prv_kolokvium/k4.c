/*Да се напише програма која дозволува преку тастатура да се внесе
одреден датум (во формат ден-месец-година) и број на карти за даден
настан. Програмата треба да го провери датумот, и според табелата на
цени на карти, треба да отпечати на екран колку треба да се плати.
Регуларна цена на една карта за настан е 500 денари доколку се купи
пред датумите наведени во табелата. Цените што се наведени во
табелата, се дополнително што треба да се доплати, покрај основните
500 денари. Датумот на настанот е 24.11.2022. На пример, ако се
внесе 25.10.2022 и 2 карти тогаш треба да се плати 1500 денари
(секоја карта чини 500+250 денари, каде 250 денари е добиено
бидејќи 25.10.2022 е после 15.10.2022, а пред 10.11.2022).
Датуми на кои се купува За доплата по карта
После 1.9.2022          100 денари
После 15.10.2022        250 денари
После 10.11.2022        350 денари
На денот на настанот    500 денари*/
#include <stdio.h>
int main ()
{
    int den, mesec, godina, karti;
    int cena=500;
    printf("vnesi datum vo format den-mesec-godina ");
    scanf("%d %d %d", &den, &mesec, &godina);
        if ( den>31 || mesec>12 )
        {
            printf("pogreshno vnesen datum");
            return 0;
        }
        if ( mesec>=11 && den>24 )
        {
            printf("nastanot e zavrshen");
            return 0;
        }
        if ( godina!=2022 )
        {
            printf("pogreshno vnesen datum");
            return 0;
        }
    printf("kolku karti sakas da kupis? ");
    scanf("%d", &karti);
    if ( den==24 && mesec==11 && godina==2022 )
    {
        cena=(500+cena)*karti;
        printf("cenata na kartite e %d", cena);
        return 0;
    }
    if ( mesec>=9 )
    {
        if ( mesec==9 || (mesec<=10 && den<15))
            {
                cena=(cena+100)*karti;
            }
        else
            {
                if ( mesec==10 || (den<10 && mesec<=11))
                {
                    cena=(cena+250)*karti;
                }
                else 
                {
                    if ( mesec<=11 && den<24 )
                    cena=(cena+350)*karti;
                }
            }
    }
    else 
    {
        cena=cena*karti;
    }
    printf("treba da platite %d", cena);
    return 0;
}