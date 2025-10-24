/*Да се напише рекурзивна функција која како аргументи добива
почеток и крај на даден опсег. Функција да ги отпечати сите броеви во
зададениот опсег за кои е исполнето дека збирот од трети степен на
цифрите на дадениот број е еднаков со самиот број. Пресметката за
збирот од трети степен на цифрите на дадениот број да се прави во
посебна функција која не е рекурзивна (бројот на цифри во бројот не
е константен). Да се напише главна програма во која ќе се повика функцијата.*/
#include <stdio.h>
void rekurzivna ( int n, int m);
int funkcija ( int a );
int main ()
{
    int x, y;
    printf("vnesi gorna i dolna granica ");
    scanf("%d %d", &x, &y);
    if ( x>y )
    {
        printf("nepravilen vnes");
        return 0;
    }
    rekurzivna (x, y);
    return 0;
}
void rekurzivna ( int n, int m )
{
    if ( n>m )
        return ;
    if ( funkcija(n)==n)
        printf("%d\n", n);
    rekurzivna (n+1, m);
}
int funkcija ( int a )
{
    int b=0, s=0;
    while ( a!=0 )
    {
        b=a%10;
        a/=10;
        s+=(b*b*b);
    }
    return s;
}