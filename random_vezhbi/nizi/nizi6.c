/*Да се напише програма која за низа од N реални броеви ќе го најде елементот со
максимална вредност, а потоа ќе ги зголеми елементите за таа максимална вредност
(бројот на елементи во низата како и самите елементи на низата се внесуваат од
тастатура).*/
#include <stdio.h>
int main ()
{
    int n, max=0; 
    printf("kolku elementi ima nizata? ");
    scanf("%d", &n);
    int a[n];
    printf("vnesi gi elementite na nizata: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if (max<a[i])
        max=a[i];
    }
    printf("novata niza e: ");
    for (int i=0; i<n; i++)
    {
        a[i]+=max;
        printf("%d ", a[i]);
    }
    return 0;
}