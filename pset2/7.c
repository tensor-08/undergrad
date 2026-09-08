#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if(a%400 == 0)
    {
        printf("leap\n");
    }
    else if(a%100!=0 && a%4 == 0)
    {
        printf("leap\n");
    }
    else
    {
        printf("not leap\n");
    }
    return 0;
}