/*Да се напише програма која чита матрица со целобројни елементи. Димензиите на
матрицата се внесуваат од тастатура, максимални димензии се 10x10. Програмата треба да
ги прикаже на екран оние елементи од матрицата кои се појавуваат во секој ред. Доколку
не постојат такви броеви, на екран да се прикаже порака за грешка. */
#include <stdio.h>
int main ()
{
    int n, m, i, j;
    int br=0;
    printf("vnesi gi dimenziite na matricata: "); // ne pojce od 10, me mrzi toa, nbt e 
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("vnesi gi elementite na matricata: ");
    for (i=0;i<n;i++)
    for (j=0;j<m;j++)
    scanf("%d", &a[i][j]);
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++) 
        
    }
    return 0;
}
// svaki el eden po eden da go proveri za sekoja pozicija?
// 