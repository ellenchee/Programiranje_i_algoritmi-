/*Да се напише програма за организација на посета на
натпревари на фудбалското првенство во Катар. Корисникот
прво треба да внесе колку пари има на располагање, а потоа
програмата треба, врз основа на табелата дадена подолу, да
пресмета колку натпревари може да посети (во траењето на
натпреварите вклучени се и безбедносните проверки кои се
различни за секој натпревар).*/
#include <stdio.h>
int main ()
{
    int budzet;
    int mh=10000, sk=20000, gj=8000;
    float t1=2.0, t2=2.5, t3=3.0;
    int sn=0;
    float st=0;
    printf("kolku e vashiot budzet? ");
    scanf("%d", &budzet);
    if ( budzet >= mh )
    {
        sn++;
        st+=t1;
        budzet-=mh;
        if ( budzet >= sk )
        {
            sn++;
            st+=t2;
            budzet-=sk;
            if ( budzet >= gj )
            {
                sn++;
                st+=t3;
            }
        }
    }
    else 
    {
        sn=0; st=0;
    }
    printf("moze da se posetat %d natprevari i vremetraenjeto iznesuva %.1f chasa", sn, st);
    return 0;
}