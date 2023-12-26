#include <stdio.h>
#include <stdlib.h>
#define n 2
typedef struct oyun{
    char isim[10];
    char soyisim[10];
    int yas;
}oyuncu;
typedef struct team{
    char ekip_adi[10];
    oyuncu player1,player2;

}ekip;
void ekipal(ekip *apachi)
{
    printf("ekibin adini gir\n");
    scanf("%s",&apachi->ekip_adi);
}
void oyuncual(ekip *apachi)
{
    printf("oyuncu adi\n");
    scanf("%s",&apachi->player1.isim);
    printf("oyuncu soyadi\n");
    scanf("%s",&apachi->player1.soyisim);
    printf("oyuncu yasi\n");
    scanf("%d",&apachi->player1.yas);
    printf("oyuncu adi\n");
    scanf("%s",&apachi->player2.isim);
    printf("oyuncu soyadi\n");
    scanf("%s",&apachi->player2.soyisim);
    printf("oyuncu yasi\n");
    scanf("%d",&apachi->player2.yas);
}
void oyuncubas(ekip leo)
{
    printf(" %s  %s  %d\n",leo.player1.isim,leo.player1.soyisim,leo.player1.yas);
    printf(" %s  %s  %d\n",leo.player2.isim,leo.player2.soyisim,leo.player2.yas);

}
void ekipibas(ekip apachi)
{
        printf("ekip adi: %s\n",apachi.ekip_adi);
        oyuncubas(apachi);

}
int main()
{
    ekip leo[n];
    int i;
    for(i=0;i<n;i++)
    {
        ekipal(&leo[i]);
        oyuncual(&leo[i]);

    }
    for(i=0;i<n;i++)
    {
        ekipibas(leo[i]);
    }
    return 0;
}
