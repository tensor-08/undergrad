#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a == b)
    {
        printf("both are equal\n");
    }
    else if(a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else
    {
        printf("%d is greater than %d\n", b, a);
    }
    return 0;
}