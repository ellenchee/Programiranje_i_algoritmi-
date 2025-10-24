#include <stdio.h>
int main()
{
    int n, m, i=0;
    printf("Vnesi broj: ");
    scanf("%d", &m);
    i++;
    do
    {
        printf("Vnesi broj: ");
        scanf("%d", &n);
        if ( n > m )
        i++;
    } while ( n > m );
    printf("Strogo rastecki broevi %d", i);
    return 0;
}
