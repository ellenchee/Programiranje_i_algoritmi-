/*Да внесат три броеви од тастатура и да се пресмета
производот од нивните факториели.*/
#include <stdio.h>
int faktoriel(int n);
int main ()
{
    int a, b, c, s=0;
    printf("vnesi tri broja od tastatura");
    scanf("%d %d %d", &a, &b, &c);
    a=faktoriel(a);
    b=faktoriel(b);
    c=faktoriel(c);
    s=a*b*c;
    printf("proizvot od faktorielite na trite broja e %d", s);
    return 0;
}
int faktoriel(int n)
{
    int f=1;
    for (int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}