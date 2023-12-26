#include <stdio.h>
#include <stdlib.h>
struct tip{
int ne;
union{
char karakter;
float sayi;
}birlesim;
};
int main()
{
    struct tip leo[20];
    int i=-1;
    char satir;
    float toplam=0;
    float say=0;
    do
    {
        i++;
        printf("sifir yada bir gir\n");
        scanf("%d",&leo[i].ne);
        scanf("%c",&satir);
        if(leo[i].ne==0)
        {
            printf("sayi giriniz\n");
            scanf("%f",&leo[i].birlesim.sayi);
            toplam+=leo[i].birlesim.sayi;
            say++;
        }
        if(leo[i].ne==1)
        {
            printf("karakter giriniz\n");
            scanf("%c",&leo[i].birlesim.karakter);
        }

    }
    while(leo[i].ne==1 || leo[i].ne==0);
    printf("ortalama:%f",toplam/say);
    return 0;
}
