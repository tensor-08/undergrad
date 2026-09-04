#include <stdio.h>

int main(void)
{
    float c, f;
    scanf("%10.2f", &c);
    f = (c * 1.8) + 32;
    printf("%10.2f", f);
    return 0;
}