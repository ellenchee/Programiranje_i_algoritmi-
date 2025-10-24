/*Да се напише функција која како аргументи
добива почеток и крај на даден опсег.
Функцијата треба да го врати бројот на броеви
во опсегот кај кои најзначајната (најлевата)
цифра е строго поголема од најнезначајната
(најдесната) цифра. Ако во опсегот нема
броеви кои го задоволуваат барањето
функцијата да врати нула. Споредбата на
најзначајната и најнезначајната цифра за
даден број да се прави во посебна рекурзивна
функција (бројот на цифри во бројот не е
константен).
 Да се напише главна програма во која ќе се
повика функцијата.*/
#include<stdio.h>
int funkcija (int n, int m);
int rekurzivna (int y, int z);
int main ()
{
    int a, b;
    printf("vnesi go opsegot ");
    scanf("%d %d", a, b);
    if ( a>b ){
        printf("vnesovte pogreshen opseg");
        return 0;
    }

    return 0;
}
int funkcija (int n, int m)
{
    int d=1, c=0, brojac=0;
    for ( int i=n; i<=m; i++)
    {
        x=i;
        while ( x!=0)
        {
            brojac++;
            x/=10;
        }
        for ( int j=1; j<brojac; j++)
        {
            d*=10;
        }
        int najznacajna=i/d;
        int najneznacajna=i%10;
        int s=0;
        int s+=rekurzivna(najznacajna, najneznacajna);
        return s;
    }

}
int rekurzivna (int y, int z)
{
    if ( y<z )
        return 0;
    else
        return 1;
}