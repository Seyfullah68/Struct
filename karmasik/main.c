#include <stdio.h>
#include <stdlib.h>

typedef struct karmasik{
float a,b;
}leo;
void topla(leo *x,leo *y,leo *sum)
{
    sum->a=x->a+y->a;
    sum->b=x->b+y->b;
}
int main()
{

    leo k1,k2,toplam;
    printf("ilk sayiyi gir\n");
    scanf("%f",&k1.a);
    scanf("%f",&k1.b);
    printf("ikinci sayiyi gir\n");
    scanf("%f %f",&k2.a,&k2.b);
    topla(&k1,&k2,&toplam);
    printf("%.1f+%.1f i",toplam.a,toplam.b);
    return 0;
}
