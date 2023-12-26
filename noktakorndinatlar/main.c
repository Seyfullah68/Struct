#include <stdio.h>
#include <stdlib.h>
typedef struct {
char ad[10];
int x_kor;
int y_kor;
}isimler ;
void bas(isimler p [],int n)
{
   for(int i=0;i<5;i++)
    {
        printf("%s x:%d y:%d",p[i].ad,p[i].x_kor,p[i].y_kor);
        printf("\n");
    }
}
int main()
{
    isimler ben[5]={{"ali",1,2},{"veli",3,4},{"zeli",5,6},{"deli",7,8},{"meli",9,0}};
    bas(ben,5);
    return 0;
}
