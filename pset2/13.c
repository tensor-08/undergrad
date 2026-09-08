#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(b >= a)
    {
        a = b;
    }
    if(a >= c)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", c);
    }
    return 0;
}