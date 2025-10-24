#include <stdio.h>
int main () 
{
    int n, s=0, i;
    int PolozbaMin=0, PolozbaMax=0;
    printf("kolku broevi kje ima nizata? ");
    scanf("%d", &n);
    if ( n>100 )
    {
        printf("nizata ne moze da ima povekje od 100 chlena");
        return 0;
    }
    int a[n];
    printf("vnesi gi chlenovite na nizata ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        s+=a[i];
    }
    int min=a[0], max=a[0];
    for (i=0; i<n; i++)
    {
        if ( min > a[i] )
            {
                min=a[i];
                PolozbaMin=i;
            }
        if ( max < a[i] )
            {
                max=a[i];
                PolozbaMax=i;
            } 
    }
    float SrednaVrednost=s/(float)n;
    printf("Srednata vrednost e %f \nMaksimalen element e %d \nMinimalen element e %d \n", SrednaVrednost, max, min);
    if ( PolozbaMin < PolozbaMax )
    {
        printf("elementi izmegju: ");
        for ( i=PolozbaMin+1; i<PolozbaMax; i++)
        printf("%d ", a[i]);
    }
    return 0;
}
//Int niza[] = {1,0 ,7 , 2, 3, 14, 5, 2} N = 8