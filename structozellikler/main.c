#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
char isim[10];
char soyisim[10];
int yas;
};
int main()
{
    struct ogrenci seyfo;
    strcpy(seyfo.isim,"seyfullah");
    strcpy(seyfo.soyisim,"ilgun");
    seyfo.yas=26;
    printf("%s\t%s\t%d",seyfo.isim,seyfo.soyisim,seyfo.yas);
    printf("\n");
    struct ogrenci leo={"leoo","apachi",2};
    printf("%s\t%s\t%d",leo.isim,leo.soyisim,leo.yas);
    return 0;
}
