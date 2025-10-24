#include <stdio.h>
int main ()
{
    int n, m, j, i;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    if ( n>100 || m>100 )
    {
        printf("ne");
        return 0;
    }
    int a[n][m], b[n][m], brojac=0;
    printf("vnesi ja matricata a ");
    for ( i=0; i<n; i++ )
    {
        for ( j=0; j<m; j++) {
        scanf("%d", &a[i][j]);
    }}
    printf("vnesi ja matricata b ");
    for ( i=0; i<n; i++ )
    {
        for ( j=0; j<m; j++) {
        scanf("%d", &b[i][j]);
    }}
    printf("isti el: ");
    for ( i=0; i<n; i++ )
    {
    for ( j=0; j<m; j++) {
        if ( a[i][j] == b[i][j] ) {
        printf("[%d][%d] ", i, j);
        brojac++;}
    }}
    printf(" vkupno %d", brojac);
    return 0;
}