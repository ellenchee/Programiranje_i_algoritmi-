#include <stdio.h>
int main()
{
    int n, max=0;
    do
    {
        printf("Vnesi broj: ");
        scanf("%d", &n);
        if ( n > max )
            max=n;
    } while ( n > 0 );

    if ( max == 0 )
        printf("Greshka\n");
    else
        printf("Najgolemiot broj e %d", max);
    return 0;
}
