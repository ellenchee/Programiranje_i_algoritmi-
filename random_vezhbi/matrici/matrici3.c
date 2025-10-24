/*Да се напише програма која елементите од дадена матрица ќе ги помести на следниот
начин:
Да не се користи if.
1 2 3               
4 5 6               
7 8 9               
⇒
9 1 2
3 4 5
6 7 8 */
#include <stdio.h>
int main ()
{
    int n, m;
    printf("vnesi ja dolzinata na matricata: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("vnesi ja matricata: ");
        for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    int t=a[n-1][m-1];
        for(int k=n*m-1; k>0; k--)
            a[k/n][k%n]=a[(k-1)/n][(k-1)%n]; 
    a[0][0]=t;
    printf("transformirana: ");
        for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            printf("%d ", a[i][j]);
    return 0;
}