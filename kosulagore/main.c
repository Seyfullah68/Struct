#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct ogrenci{
char ad[10];
int no;
};
int main()
{
    struct ogrenci leo;
    printf("no?\n");
    scanf("%d",&leo.no);
    if(leo.no==2019)
    {
        strcpy(leo.ad,"apachi");
        printf("%s\t%d",leo.ad,leo.no);
    }
    return 0;
}
