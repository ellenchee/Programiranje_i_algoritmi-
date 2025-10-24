#include <stdio.h>
int main ()
{
    int n, m;
    int parni=0, neparni=0, brojac=0;
    printf("kolku broevi kje vneses? ");
    scanf("%d", &n);
    printf("vnesi gi broevite\n");
    for (int i=0; i<n; i++)
    {
        int broj;
        scanf("%d", &broj); 
        if ( broj%2==0 )
            parni++;
        else 
            neparni++;
        if ( ((broj%2==0 && m%2!=0 ) || (broj%2!=0 && m%2==0)) && m!=0 )
            brojac++;
        m=broj;
    }
    printf("brojot na parni broevi e %d, brojot na neparni e %d, a brojot na promeni e %d", parni, neparni, brojac);
    return 0;
}