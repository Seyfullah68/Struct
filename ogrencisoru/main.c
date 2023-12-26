#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
int okul_no;
char cevaplar[10];
int net;
};

int main()
{
    char dogrucevaplar[10];
    int i,j;
    int yanlis=0;
    int dogru=0;
    printf("dogru cevaplari giriniz\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",&dogrucevaplar[i]);
    }
    struct ogrenci sinif[2];
    for(i=0;i<2;i++)
    {
        printf("%d inci ogrencinin okul no su:\n",i+1);
        scanf("%d",&sinif[i].okul_no);
        printf("ogrenci cevaplari\n");
        for(j=0;j<10;j++)
        {
            scanf("%s",&sinif[i].cevaplar[j]);
            if(sinif[i].cevaplar[j]!=dogrucevaplar[j])
            {
                yanlis++;
            }
        }
        dogru=10-yanlis;
        sinif[i].net=dogru-(yanlis/4);
        dogru=yanlis=0;
    }
    for(i=0;i<2;i++)
    {
        printf("%d nolu ogrenci neti: %d\n",sinif[i].okul_no,sinif[i].net);
    }

    return 0;
}
