#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct personel{
    int sifre;
    char isim[10];
    char soyisim[10];
    int yas;
    float maas;
    char cinsiyet[10];
}bilgiler;
void sirala(bilgiler apa[], int x)
{
    int i,j;
    bilgiler orn;
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if((strcmp(apa[i].isim,apa[j].isim))>0)
            {
                orn=apa[i];
                apa[i]=apa[j];
                apa[j]=orn;
            }
        }
    }
}
void listele(bilgiler vik[],int y)
{
    int i;
    for(i=0;i<y;i++)
    {
        printf("%s  %s  %d  %d  %f  %s\n ",vik[i].isim,vik[i].soyisim,vik[i].yas,vik[i].sifre,vik[i].maas,vik[i].cinsiyet);
    }
}

int main()
{
    int n,i;
    char satir;
    printf("kac tane personel olacak\n");
    scanf("%d",&n);
    bilgiler leo[n];
    for(i=0;i<n;i++)
    {
        scanf("%c",&satir);
        printf("isim\n");
        scanf("%s",&leo[i].isim);
        scanf("%c",&satir);
        printf("soyisim\n");


        gets(leo[i].soyisim);
        printf("yas\n");
        scanf("%d",&leo[i].yas);
        printf("maas\n");
        scanf("%f",&leo[i].maas);
        scanf("%c",&satir);
        printf("cinsiyet\n");
        gets(leo[i].cinsiyet);
        printf("sifre\n");
        scanf("%d",&leo[i].sifre);
    }
    sirala(leo,n);
    listele(leo,n);
    return 0;
}
