/*Да се напише програма која елементите на матрица Amxn огледално ги пресликува во
однос на хоризонталата.
2 3
1 7
0 5
4 6
⇒ 
4 6
0 5
1 7
2 3
 
1 2 5
4 3 8
9 0 6
⇒
9 0 6 
4 3 8
1 2 5 */
// [0][0] -> [2][0] 
#include <stdio.h>
int main ()
{
    int n, m;
    printf("vnesi gi dimenziite na matricata: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("vnesi gi elementite na matricata: ");
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    {
        scanf("%d", &a[i][j]);
    }
    int t=0;
    for (int i=0; i<n/2; i++)
    {
    for (int j=0; j<m; j++) 
    {
        t=a[i][j];              
        a[i][j]=a[n-i-1][j];    
        a[n-i-1][j]=t;    
    }}
    printf("whola ");
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    {
        printf("%d ", a[i][j]);
    }
    return 0;
}