#include <stdio.h>

int main(void)
{
    int a;
    char b;
    scanf("%d", &a);
    printf("does the person belong to sports quota?(respond y or n) ");
    scanf(" %c", &b);
    if(b == 'y')
    {
        printf("final marks: %d\n", a + 10);
    }
    else if(b == 'n')
    {
        printf("final marks: %d\n", a);
    }
    else
    {
        printf("Input 'y' or 'n'\n");
    }
    return 0;
}