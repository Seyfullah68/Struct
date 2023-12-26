#include <stdio.h>
#include <stdlib.h>
struct sure{
int saat;
int dakika;
int saniye;
};
void bul(struct sure x1, struct sure x2, struct sure *frk)
{
    if(x1.saniye>x2.saniye)
    {
        x2.saniye+=60;
        --x2.dakika;
    }
    frk->saniye=x2.saniye-x1.saniye;
    if(x1.dakika>x2.dakika)
    {
        x2.dakika+=60;
        --x2.saat;
    }
    frk->dakika=x2.dakika-x1.dakika;
    frk->saat=x2.saat-x1.saat;

}
int main()
{
    struct sure t1,t2,fark;
    printf("ilk sureyi gir\n");
    scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
    printf("ikinci sureyi gir\n");
    scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);
    bul(t1,t2,&fark);
    printf("fark: %d  %d  %d",fark.saat,fark.dakika,fark.saniye);
    return 0;
}
