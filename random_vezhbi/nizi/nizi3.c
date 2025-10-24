/*Непознат број студенти одговарале на по десет прашања (внесувањето на студенти да
се прекине кога ќе се внесе знакот '.' по отчитувањето на сите одговори за даден
студент). На секое од прашањата студентот или не одговорил или одговорил со
заокружување на еден од понудените пет одговори (1, 2, 3, 4 и 5). За секој точен 
одговор студентот добива по два поени, а за секој погрешен му се одзема по еден поен.
Да се напише програма која на почетокот од тастатура ќе ги прочита точните одговори
на десетте прашања, а потоа за внесените одговори на секој студент ќе го испечати
бројот на поени кои ги освоил студентот. Напомена: Прашањата на кои студентот
не одговорил се кодираат со било кој знак различен од 1, 2, 3, 4 и 5. */
#include <stdio.h>
#define BrPrasanja 10
void main()
{
    int kluc[BrPrasanja], odgovor[BrPrasanja];
    char c=' ';
    int bod, i, j=1;
        printf("Vnesi tocni odgovori:\n");
        for(i=0;i<BrPrasanja;i++)
            scanf("%d",&kluc[i]);
        printf("Vnesuvaj odgovori na studenti:\n");
    while(c != '.')
    {
        for(i=0;i<BrPrasanja;i++)
            scanf("%d",&odgovor[i]);
            bod=0;
        for(i=0;i<BrPrasanja;i++)
        {
            if((odgovor[i]>=1)&&(odgovor[i]<=5))
                if(odgovor[i]==kluc[i]) bod+=2;
                    else bod-=1;
        }
    printf("Student %d: %d bodovi.\n", j, bod);
        j++;
    printf("Sleden student (. za kraj)\n");
        c=getchar();
    }
} 