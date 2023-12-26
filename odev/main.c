#include <stdio.h>
#include <stdlib.h>

void diagonal(int leo[100][100],int x,int y)
{
    int i,j;
    int toplam=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
          if(i!=j)
          {
              if(leo[i][j]!=0)
              {
                  toplam+=1;
              }
          }
        }
    }
    if(toplam==0)
        printf("matris diagonaldir\n");
    else
        printf("matris diagonal degildir\n");
}
void simetrik(int apa[100][100],int x,int y)
{
    int i,j;
    int toplam=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
           if(apa[i][j]!=apa[j][i])
           {
               toplam+=1;
           }
        }
    }
    if(toplam==0)
        printf("matris simetriktir\n");
    else
        printf("matris simetrik degildir\n");
}
void bastir(int leo[100][100],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%4d",leo[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    fflush(stdin);
    int a,b;
    int i,j;
    printf("matris satir sayisini giriniz\n");
    scanf("%d",&a);
    printf("matris sutun sayisini giriniz\n");
    scanf("%d",&b);
    int matris[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d x %d inci elemani giriniz\n",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    diagonal(&matris,a,b);
    simetrik(&matris,a,b);
    bastir(&matris,a,b);

    return 0;
}
