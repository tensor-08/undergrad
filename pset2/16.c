#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if(a < 150)
    {
        printf("dwarf\n");
    }
    else if(a >= 150 && a < 165)
    {
        printf("average\n");
    }
    else
    {
        printf("tall\n");
    }
    return 0;
}