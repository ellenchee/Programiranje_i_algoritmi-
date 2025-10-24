/*Да се напише програма која што ќе дозволи внесување на К цели повеќецифрени броеви од тастатура (К исто така се внесува од тастатура).
Програмата треба, од секој внесен цел број, да ја пресмета средната вредност на цифрите во бројот и да изброи колку од цифрите на бројот се под таа средна вредност.
За секој број да се отпечати средната вредност на цифрите и колку цифри се под таа средна вредност.
Пресметката на средна вредност на цифрите да се прави со посебна функција, додека пак проверката за колку цифри се под дадена вредност да се прави со посебна функција. 
Пример: 
printf(“Za brojot %d, srednata vrednost na cifrite e  %f, ima %d cifri sto se pod taa vrednost”,172543, srednaVrednost(172543), podVrednost(172543));
На екран: Za brojot 172543, srednata vrednost na cifrite e 3.66667, ima 3 cifri sto se pod taa vrednost
*/ 
#include <stdio.h>
float sredna_vrednost (int a);
int cifri (int b, float c);
int main ()
{
    float sv;
    int bc, k, n, i;
    printf("kolku broja kje vnesesh?");
    scanf("%d", &k);
    for ( i=0; i<k; i++)
    {
        printf("vnesi broj: ");
        scanf("%d", &n);
        sv=sredna_vrednost(n);
        bc=cifri(n, sv);
        printf("Za brojot %d, srednata vrednost na cifrite e  %f, ima %d cifri sto se pod taa vrednost\n", n, sv, bc);
    }
    return 0;
}
float sredna_vrednost (int a) /*n*/
{
    float x, sum, num;
    while ( a > 0 )
    {
        sum+=a%10;
        a/=10;
        num++;
    }
    x=sum/num;
    return x; 
}
int cifri (int b, float c) /*n, sv*/
{
    int y, count=0;
    while ( b>0 )
    {
        y=b%10;
        if ( y<c )
            count++;
        b/=10;
    }
    return count;
}
