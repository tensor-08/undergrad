#include <stdio.h>

int main(void)
{
    int d;
    printf("Days: ");
    scanf("%d", &d);
    printf("%d years %d months and %d days\n", d/365, (d%365)/30, (d%365)%30);
    return 0;
}