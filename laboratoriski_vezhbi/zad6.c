#include <stdio.h>
int main ()
{
    int cas, min;
    printf("vnesi go vremeto vo format cas:min ");
    scanf("%d %d", &cas, &min);
    if ( cas>23 || min>59 )
    {
        printf("nepravilno vneseni vrednosti");
        return 0;
    }
    if ( cas<12 )
    {
        printf("vnesenoto vreme e pretpladne\n");
        if ( cas>=7 && cas<=9 )
            printf("vreme e za dorucek\n");
    }
    else 
    {
        printf("vnesenoto vreme e popladne\n");
        if ( cas>=12 && cas<=15 )
            printf("vreme e za rucek\n");
        if ( cas>=19 && cas<=21 )
            printf ("vreme e za vecera\n");
    }
    int PreostanatoVreme=(23-cas)*60+(60-min);
    printf("preostanati se uste %d minuti vo denot", PreostanatoVreme);
    return 0;
}