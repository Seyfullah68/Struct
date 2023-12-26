#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

struct meyve{
char isim[10];
int adet;
int agirlik;
char sekil[10];
int fiyat;
};
struct sepet{
char isim[10];
struct meyve m[N];
};
void olustur(struct meyve *apa)
{

      printf(" meyve ismi:\n");
      scanf("%s",apa->isim);
      printf( "meyve adeti:\n");
      scanf("%d",&apa->adet);
      printf("meyve agirligini:\n");
      scanf("%d",&apa->agirlik);
      printf("meyve seklini giriniz\n");
      scanf("%s",apa->sekil);
      printf("fiyati giriniz\n");
      scanf("%d",&apa->fiyat);
}
int hesapla(struct meyve apac)
{
    int total=0;
    total=apac.adet*apac.fiyat;
    if(strcmp(apac.sekil,"oval")==0)
        {
            total=total*2;
        }
    if(apac.agirlik>200)
    {
        total=total+3;

    }
    return total;

}
int main()
{
    int fiyat1;
    int fiyat2;
    struct sepet leo;
    printf("sepet ismini giriniz\n ");
    scanf("%s",leo.isim);
    printf("meyve bilgileri:\n");
    olustur(&leo.m[0]);
    olustur(&leo.m[1]);
    fiyat1=hesapla(leo.m[0]);
    fiyat2=hesapla(leo.m[1]);
    printf("%s sepetinin total fiyati: %d",leo.isim,fiyat1+fiyat2);
        return 0;
}
