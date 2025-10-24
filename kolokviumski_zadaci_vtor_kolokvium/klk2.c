/*Да се напише програма која ќе дозволи внесување на две
матрици А и В со исти димензии. Треба да се креира матрица С
на тој начин што се проверува секој елемент од матрицата А
дали постои во матрицата В. Доколку истиот постои во В, тој се
сместува во матрицата С на иста позиција на која се наоѓал во
матрицата В, но доколку не постои во матрицата В, тогаш
елементот се сместува во матрицата С на позиција на која е
сметен во матрицата А. Доколку има елементи што
недостасуваат во матрицата С, да се пополнат со вредност 0. На
крај да се отпечати новоформираната матрица.

    2 3 7       6 2 7      0 2 7
A = 3 1 4   B = 3 1 4   C= 3 1 4
    2 1 8       2 9 6      2 0 8*/
#include <stdio.h>
int main ()
{
    int n, i, j;
    printf("vnesi ja dimenzijata na matricata: ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    printf("vnesi gi elementite na matricata A: ");
    for (i=0; i<n; i++)
    for (j=0; j<n; j++)
    scanf("%d", &a[i][j]);
    printf("vnesi gi elementite na matricata B: ");
    for (i=0; i<n; i++)
    for (j=0; j<n; j++){
    scanf("%d", &b[i][j]); c[i][j] = 0;}
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++) //svaki element od A
        {
            int el=0;
            for (int x=0; x<n; x++) //svaki element od B
            {
                for (int y=0; y<n; y++)
                {
                    if (a[i][j]==b[x][y])
                    {
                        c[x][y]=b[x][y];
                        el=1;
                        break;
                    }
                }
                if (el) break;
            }
            if (!el) c[i][j]=a[i][j];
        }
    }
    printf("novata matrica e: ");
    for (i=0; i<n; i++)
    for (j=0; j<n; j++)
    printf("%d ", c[i][j]);
    return 0;
}