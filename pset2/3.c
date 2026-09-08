#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if(a == 1 || a == 0)
    {
        printf("no\n");
    }
    else if((a&(a-1)) == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}