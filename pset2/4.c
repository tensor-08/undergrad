#include <stdio.h>

int main(void)
{
    int a, b = 1, x;
    scanf("%d", &a);
    for(int i = 0; i < 16; i++)
    {
        if(a == b)
        {
            printf("yes\n");
            return 0;
        }
        b = b * 4;
    }
    printf("no\n");
    return 0;
}