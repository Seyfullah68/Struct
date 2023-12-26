#include <stdio.h>
#include <stdlib.h>

struct patenci
{
    char isim[10];
    char soyisim[10];
    float puanlar[10];
    float ortalama;

};
float hesapla(struct patenci sen)
{
    float max,min,sonuc,toplam=0;
    max=0;
    min=6;
    for(int i=0;i<10;i++)
    {
        if(sen.puanlar[i]>max)
        {
            max=sen.puanlar[i];
        }
        if(sen.puanlar[i]<min)
        {
            min=sen.puanlar[i];
        }
        toplam += sen.puanlar[i];
    }
    sonuc=(toplam-min-max)/8;
    return sonuc;
}
int main()
{
    int n,birinci;
    float max=0;
    printf("kac yarismaci katilacak\n");
    scanf("%d",&n);
    struct patenci ben[n];
    for(int i=0;i<n;i++)
    {
        printf("ismi gir\n");
        scanf("%s",&ben[i].isim);
        printf("soyismi gir\n");
        scanf("%s",&ben[i].soyisim);
        printf("puanlari giriniz\n");
        for(int j=0;j<10;j++)
        {
            scanf("%f",&ben[i].puanlar[j]);
        }
        ben[i].ortalama=hesapla(ben[i]);
        if(ben[i].ortalama>max)
        {
            max=ben[i].ortalama;
            birinci=i;
        }
    }
    printf("\n %s isimli yarismaci %f ile birinci",ben[birinci].isim,max);

    return 0;
}
