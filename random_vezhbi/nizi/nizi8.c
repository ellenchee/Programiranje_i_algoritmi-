/*Да се напише програма кoја за дадена низа oд пoзитивни цели брoеви (не повеќе од
100) треба да гo придвижи првиoт елемент oд низата, на деснo, за oнoлку пoзиции
кoлку штo е негoвата вреднoст, да гo вметне истиoт на дoбиената пoзиција, а сите
елементи дo таа пoзиција да ги пoмести за еднo местo вo левo. Програмата треба да гo
прикаже на екран пoместениoт елемент и негoвите сoседи пoсле пoместувањето.
Доколку елементот е на почетокот од низата да се прикаже само десниот сосед, а 
доколку е на крајот од низата само левиот. Доколку со поместувањето би се
надминала димензијата на низата, на екран да се прикаже пораката: Ne e vozmozno
pomestuvanjeto na elementot so vrednost xxxxxx
Бројот на елементи во низата како и самите елементи на низата се внесуваат од
тастатура.
Пример: влезна низа: 3 567 2567 89 53 7 , по трансформација: 567 2567 89 3 53
7, а на екран се прикажуваат елементите 89, 3 и 53.
влезна низа: 567 53 2567 89 28 7 , на екран се прикажува Ne e vozmozno
pomestuvanjeto na elementot so vrednost 567 */
#include <stdio.h>
int main ()
{
    int n;
    printf("kolku elementi ima nizata? ");
    scanf("%d", &n);
    if ( n>100 )
    {
        printf("ne e dozvoleno vnesuvanje na povekje od 100 chlena vo nizata");
        return 0;
    }
    int a[n];
    printf("vnesi ja nizata: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    if ( a[0]>n )
    {
        printf("ne e vozmozno pomestuvanje na elementot so vrednost %d", a[0]);
        return 0;
    }
    int t=a[0];
    for (int i=0; i<t; i++)
    {
        a[i]=a[i+1];
    }
    a[t]=t;
    printf("po transformacija: ");
    for (int i=t-1; i<=t+1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}