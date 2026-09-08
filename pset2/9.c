#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if( c == d)
    {
        printf("cannot divide by zero\n");
    }
    else
    {
        printf("%f", ((a-b)*1.0)/(c-d));
    }
    return 0;
}