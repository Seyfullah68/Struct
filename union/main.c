#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union ben
{
    int x;
    char a;
    float y;
};
int main()
{
    union ben seyfo;
    seyfo.x=10;
    //seyfo.a='b';
    seyfo.y=5;
    printf("%d ",seyfo.x);
    printf("\n");
    printf("hafizada tutulan boyut: %d",sizeof(seyfo));
    return 0;
}
