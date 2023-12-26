#include <stdio.h>
#include <stdlib.h>
#define N 1

struct isci
{
    char isim[10];
    int yas;
};
struct magaza
{
    char isim[10];
    char adres[10];
    struct isci e1,e2;
};

void isciyi_olustur(struct isci *lee)
{
    printf("isci ismi:\n");
    scanf("%s",lee->isim);
    printf("isci yasi\n");
    scanf("%d",&lee->yas);
}
void magazayi_olustur(struct magaza *apa)
{
    printf("magaza ismi:\n");
    scanf("%s",apa->isim);
    printf("adres:\n");
    scanf("%s",apa->adres);
    printf("isci 1:\n");
    isciyi_olustur(&apa->e1);
    printf("isci 2:\n");
    isciyi_olustur(&apa->e2);
}
void isciyi_bas(struct isci le)
{
    printf("%s  %d\n",le.isim,le.yas);
}
void magazayi_bas(struct magaza *ap)
{
    printf("%s\n",ap->isim);
    printf("%s\n",ap->adres);
    isciyi_bas(ap->e1);
    isciyi_bas(ap->e2);
}
int main()
{
    struct magaza leo;
    magazayi_olustur(&leo);
    magazayi_bas(&leo);
    return 0;
}
