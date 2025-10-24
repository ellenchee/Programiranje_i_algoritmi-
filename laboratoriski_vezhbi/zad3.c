#include <stdio.h>
int main ()
{
    int n, x, s, a=0;
    printf("Vnesi go n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        s=0;
        printf("Vnesi broj: ");
        scanf("%d", &x);
        while ( x != 0 )
        {
            s+=x%10;
            x/=10;
        }
        if ( s < 10 )
            a++;
    }
    float p=((float)a/n)*100;
    printf("%.0f%% broevi go ispolnuvaat uslovot", p);
    return 0;
}