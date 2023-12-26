#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
    int yas;
    char ad[10];
    char soyad[10];
    };
int main()
{
    struct ogrenci seyfo,leo;
    strcpy(seyfo.ad,"seyfullah");
    strcpy(seyfo.soyad,"ilgun");
    seyfo.yas=26;
    leo=seyfo;
    printf("%s   %s   %d",leo.ad,leo.soyad,leo.yas);
    return 0;
}
