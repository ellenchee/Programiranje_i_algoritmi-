/*faktoriel, rekurzija*/
#include <stdio.h>
int fact(int n);
int main ()
{
    int x;
    printf("vnesi go x");
    scanf("%d", &x);
    x=fact(x);
    printf("faktoriel na brojot e %d", x);
    return 0;
}
int fact (int n)
{
    if ( n==0 )
        return 1;
    else 
        return n*fact(n-1);
}