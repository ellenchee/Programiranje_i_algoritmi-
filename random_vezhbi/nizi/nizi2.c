/* Да се напише програма која за дадена низа А од N (N<=100) реални броеви ќе ја најде
аритметичката средина на елементите. Потоа низата да се трансформира така што ќе
се исфрлат елементите помали од таа вредност, и новодобиената низа да се испечати
на екран. Елементите од низата се внесуваат од тастатура (бројот на елементи во низата
исто така се внесува од тастатура). */
#include <stdio.h>
int main ()
{
    int n;
    printf("kolku clenovi kje ima nizata? ");
    scanf("%d", &n);
    if ( n>100 )
    {
        printf("nizata ne moze da ima nad 100 chlena. ");
        return 0;
    }
    int a[n];
    float s=0;
    printf("vnesi gi elementite na nizata: ");
    for ( int i=0; i<n; i++ )
    {
        scanf("%d", &a[i]);
        s+=a[i];
    }
    s/=n; 
    int j=0, b[n];
    for (int i=0; i<n; i++ )
    {
        if ( a[i]>=s )
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("novata niza e: ");
    for (int i=0; i<j; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}