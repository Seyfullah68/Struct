#include <stdio.h>
#include <stdlib.h>
union daire{
int alan;
int cevre;
};
int main()
{
    int yari;
    printf("yaricapi giriniz\n");
    scanf("%d",&yari);
    union daire leo;
    leo.alan=3*yari*yari;
    printf("alan:%d",leo.alan);
    leo.cevre=2*3*yari;
    printf("\ncevre:%d",leo.cevre);
    return 0;
}
