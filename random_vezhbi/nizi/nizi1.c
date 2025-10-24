/*Да се напише програма која за низа a составена од 10 целобројни вредности, ќе ја
пресмета просечната вредност на елементите од низата. Елементите од низата се
внесуваат од тастатура*/
#include <stdio.h>
int main ()
{
    int a[10];
    float s=0;
    printf("vnesi gi elementite na nizata ");
    for ( int i=0; i<10; i++ )
    {
        scanf("%d", &a[i]);
        s+=a[i];
    }
    printf("prosecna vrednost na elementite na nizata %f ", s/10);
    return 0;
}