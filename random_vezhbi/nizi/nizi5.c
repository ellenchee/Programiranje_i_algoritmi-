/*Да се напише програма која во низа од N цели броеви ќе го пронајде почетокот и
должината на најдолгата растечка подниза (бројот на елементи во низата како и самите
елементи на низата се внесуваат од тастатура). */
#include <stdio.h>
int main ()
{
    int n, brojac=1;
    printf("kolku elementi ima nizata? ");
    scanf("%d", &n);
    int a[n];
    printf("vnesi gi elementite na nizata: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int t=a[0], max=1, pocetok=1;
    for (int i=1; i<n; i++)
    {
        if (t<a[i])
            {
                brojac++;
                if (brojac>=max)
                {
                pocetok=i-max+1;
                max++;
                }
            }
        else 
        {
            brojac=0;
        }
        t=a[i];
    }
    printf("dolzinata na najdolgata rastecka podniza iznesuva %d, a pocetokot e elementot broj %d", max, pocetok);
    return 0;
}