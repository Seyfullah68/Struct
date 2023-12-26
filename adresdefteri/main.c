#include <stdio.h>
#include <stdlib.h>

typedef struct adres{
char isim[10];
char soyisim[10];
char tel[10];
char adress[10];
char posta[10];
}defter;

int main()
{
    int n,i;
    char satir;
    printf("kac kisi olacak\n");
    scanf("%d",&n);
    scanf("%c",&satir);
    defter liste[n];
    for(i=0;i<n;i++)
    {
        printf("isim\n");
        gets(liste[i].isim);
        printf("soyisim\n");
        gets(liste[i].soyisim);
        printf("tel\n");
        gets(liste[i].tel);
        printf("adres\n");
        gets(liste[i].adress);
        printf("posta kodu\n");
        gets(liste[i].posta);
    }
        printf("isim\tsoyisim\ttel\tadres\tposta kodu\t\n");
        printf("=========================================\n");
    for(i=0;i<n;i++)
    {

        printf("%s\t%s\t%s\t%s\t%s\n",liste[i].isim,liste[i].soyisim,liste[i].tel,liste[i].adress,liste[i].posta);
    }
    return 0;
}
