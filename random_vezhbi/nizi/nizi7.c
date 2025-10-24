/*Да се напише програма која влезната низа а1, а2, ..., an ќе ја трансформира во излезна
низа b1, b2, ..., bn на следниот начин:
b1=a1+an
b2=a2+an-1
…
bn=an+a1
На пример, влезната низа 1, 2, 3, 5, 7, треба да се трансформира во 8, 7, 6, 7, 8.*/
#include <stdio.h>
int main ()
{
    int n;
    printf("kolku elementi ima nizata? ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("vnesi ja nizata: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("novata niza e: "); 
    for (int i=0; i<n; i++)
    {
        b[i]=a[i]+a[n-i-1]; 
        printf("%d ", b[i]);
    }
    return 0;
}