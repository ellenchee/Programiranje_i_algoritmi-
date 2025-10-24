/*Квадратна матрица со ист број редици и колони се нарекува симетрична ако
Aij = Aji за секое i≠j. На пример:
0 3 5 1
3 7 6 9
5 6 2 4
1 9 4 2
Да се напише програма која проверува дали матрицата A NxN е симетрична. */
#include <stdio.h>
int main ()
{
    int n;
    printf("vnesi ja dimenzijata na matricata: ");
    scanf("%d", &n);
    int a[n][n];
    printf("vnesi gi elementite na matricata: ");
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
    {
        scanf("%d", &a[i][j]);
    }
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
    {
        if (a[i][j]!=a[j][i])
        {
            printf("matricata ne e simetricna");
            return 0;
        }
    }
    printf("matricata e simetricna");
    return 0;
}