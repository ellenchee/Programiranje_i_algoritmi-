/*Да се напише рекурзивна функција која за целиот број кој се пренесува како
аргумент, ќе го пресмета збирот на цифрите кои што се парни.
Да се напише главна програма која ќе ја користи оваа функција. */
#include<stdio.h>
int znpc (int a);
int main ()
{
    int n=0, s=0;
    printf("vnesi go n ");
    scanf("%d", &n);
    s=znpc(n);
    printf("zbirot na parnite cifri na brojot %d e %d", n, s);
    return 0;
}
int znpc (int a)
{
    int zbir=0, x=0;
    while ( a > 0 )
    {
        x+=a%10;
        if ( x%2==0 )
            zbir+=x;
        a/=10;
        x=0;
    }
    return zbir;
}
