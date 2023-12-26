#include <stdio.h>
#include <stdlib.h>
struct koordinat{
float x,y;
};
int main()
{
    float i;
    struct koordinat leo;
    printf("x\t\t y\n");
    printf("-------\t\t -------\n");
    for(i=0.0;i<=10;i+=0.1)
    {
        leo.x=20-6*cos(i);
        leo.y=15+2-sin(i);

        printf("%f\t %f\n",leo.x,leo.y);
    }

    return 0;
}
