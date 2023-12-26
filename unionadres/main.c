#include <stdio.h>
#include <stdlib.h>
union ornek{
int x;
int y;
}leo;
int main()
{
    int *a,*b;
    leo.x=1;

    a=&leo.x;
     printf("%d degeri adresi %d\n",leo.x,a);
    b=&leo.y;
    leo.y=5;

    printf("%d degeri adresi %d\n",*b,b);
    return 0;
}
