#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float x,y;
}karmasik;

int main()
{
    karmasik sayi1,sayi2,sonuc;
    char op;
    printf("yapmak istenilen islem nedir\n");
    scanf("%c",&op);
    printf("ilk karmasik sayiyi gir\n");
    scanf("%f %f",&sayi1.x,&sayi1.y);
    printf("ikinci karmasik sayiyi gir\n");
    scanf("%f %f",&sayi2.x,&sayi2.y);
    if(op=='+')
    {
        sonuc.x=sayi1.x+sayi2.x;
        sonuc.y=sayi1.y+sayi2.y;
    }
    else if(op=='-')
    {
        sonuc.x=sayi1.x-sayi2.x;
        sonuc.y=sayi1.y-sayi2.y;
    }
    else
    {
        printf("yanlis operator");
    }
    if(sonuc.y>=0)
    {
        printf("%.2f + %.2f i",sonuc.x,sonuc.y);
    }
    else
        printf("%.2f  %.2f i",sonuc.x,sonuc.y);
    return 0;
}
