#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char isim[10];
    char soyisim[10];
    float puanlar[10];
    float ortalama;

}patenci;
float hesapla(patenci sen)
{
    float max,min,toplam=0;
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
    sen.ortalama=(toplam-min-max)/8;
    return sen.ortalama;
}
int main()
{
    patenci ben;
    int i=0;
    printf("ismi giriniz\n");
    scanf("%s",&ben.isim);
    printf("soyismi giriniz\n");
    scanf("%s",&ben.soyisim);
    printf("puanlari giriniz\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&ben.puanlar[i]);
    }
    ben.ortalama=hesapla(ben);
    printf("ortalama: %f",ben.ortalama);
    return 0;
}
