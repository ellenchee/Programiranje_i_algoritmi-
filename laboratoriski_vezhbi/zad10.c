/*Да се напише програма во С која ќе дозволи да се внесе низа (од тастатура) од N реални
броеви (не повеќе од 100). N исто така се внесува од тастатура. Програмата треба да ја
најде средната вредност на низата, а потоа, да креира нова низа каде како елементи ќе ја
смести (апсолутната) разлика измеѓу секој елемент од првата низа низата до средната
вредност. На крај да се отпечати новата низа.
Пример:
float niza[] = {1.3,0.7 ,7.0 , 2.5, 3.3, 14.9, 5.1, 2.24} N = 8
Sredna vrednost =4.63
float nova[]={3.33, 3.93, 2.37, 2.13, 1.33, 10.27, 0.47, 2.39}*/
#include <stdio.h>
int main () 
{
    int n, i;
    printf("kolku chlena kje ima nizata ");
    scanf("%d", &n);
    if ( n>100 )
    {
        printf("nizata ne moze da ima povekje od 100 chlena ");
        return 0;
    }
    float a[n], s=0;
    printf("vnesi gi elementite na nizata ");
    for ( i=0; i<n; i++ )
    {
        scanf("%f", &a[i]);
        s+=a[i];
    }
    float SrednaVrednost=s/n;
    printf("sredna vrednost=%f \n", SrednaVrednost);
    float nova[n];
    for ( i=0; i<n; i++ )
    {
        nova[i]=SrednaVrednost-a[i];
        if ( nova[i] < 0 )
            nova[i]*=(-1);
        printf("%.2f ", nova[i]);
    }
    return 0;
}