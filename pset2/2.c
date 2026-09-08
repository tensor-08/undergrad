#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    a = a&1;
    if(a&1 == 1)
    {
        printf("Odd.\n");
    }
    else
    {
        printf("Even.\n");
    }
    return 0;
}