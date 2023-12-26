#include <stdio.h>
#include <stdlib.h>
typedef enum
{
    pazartesi=1,
    sali,
    carsamba,
    persembe,
    cuma,
    cumartesi,
    pazar

}gunler;
void bas(gunler x)
{
    switch (x)
    {
    case pazartesi:
        printf("pazartesi");
        break;
    case sali:
        printf("sali");
        break;
    case carsamba:
        printf("carsamba");
        break;
    case persembe:
        printf("persembe");
        break;
    case cuma:
        printf("cuma");
        break;
    case cumartesi:
        printf("cumartesi");
        break;
    case pazar:
        printf("pazar");
        break;
    default:
        printf("yanlisss");
        break;
    }
}
int main()
{
    gunler seyfo=5;
    bas(seyfo);
    return 0;
}
