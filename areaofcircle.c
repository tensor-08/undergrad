#include <stdio.h>

#define PI 3.14
int main(void)
{
    int r;
    float a;
    scanf("%d", &r);
    a = PI * r * r;
    printf("area: %f\n", a);
    return 0;
}