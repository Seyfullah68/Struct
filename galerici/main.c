#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int satis;
    union
    {
        int satisdeger;
        char marka[20];
    }satisi;
}galerici;
int main()
{
    galerici araba_A;
    araba_A.satis=0;
    strcpy(araba_A.satisi.marka,"anadol");
    araba_A.satis=1;
    araba_A.satisi.satisdeger=10000;
    printf("%s  ucret: %d",araba_A.satisi.marka,araba_A.satisi.satisdeger);

    return 0;
}
