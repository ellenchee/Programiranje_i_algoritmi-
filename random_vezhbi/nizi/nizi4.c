/*Да се напише програма која за дадена низа A од реални броеви и N, број на елементи
во A, ќе ја пресмета најголемата разлика меѓу два соседни елементи од оваа низа (бројот на
елементи во низата како и самите елементи на низата се внесуваат од тастатура)*/
#include <stdio.h>
int main ()
{
    int n;
    printf("kolku elementi ima nizata? ");
    scanf("%d", &n);
    float a[n], max=0, m=0;
    printf("vnesi gi elementite na nizata ");
    for (int i=0; i<n; i++){
        scanf("%f", &a[i]);
    }
    for (int i=0; i<n; i++){
        m=a[i]-a[i+1];
            if (m<0)
                m*=(-1);
        if (m>max)
        max=m;
    }
    printf("najgolemata razlika pomegju dva elementi e %f", max);
    return 0;
}