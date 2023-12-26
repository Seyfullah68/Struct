#include <stdio.h>
#include <stdlib.h>

struct musteri
{
  char isim[10];
  char soyisim[10];
  int kahvalti;// 0 yok, 1 var
  int yemek; //0 yok, 1 var
  int otel;// 0 yok, 1 yildiz,2yildiz
};
void otelibas(struct musteri *apachi)
{
    int i=0;
    for(i=0;i<5;i++)
    {
        if(apachi[i].otel==2)
        {
            printf("%s %s \n",apachi[i].isim,apachi[i].soyisim);
        }
    }
}
void kahva(struct musteri apa[])
{
    int i;
    int toplam=0;
    for(i=0;i<5;i++)
    {
        if(apa[i].kahvalti==1)
        {
            toplam++;
        }
    }
    printf("\n toplam kahvalti yapan sayisi:%d",toplam);
}

int main()
{
    struct musteri leo[5]={{"leo","vik",1,1,2},{"apa","chi",1,0,2},{"os","mos",0,0,0},{"vi","ve",1,1,0},{"ce","ec",0,1,1}};
    otelibas(leo);
    kahva(leo);

    return 0;
}
