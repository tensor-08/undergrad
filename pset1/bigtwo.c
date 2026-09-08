#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("larger one is: %d\n", a>b?a:b);
}