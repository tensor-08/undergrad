#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    if(a<=200)
        b = a/2;
    else if(a>200 && a <=400)
    {
        b = 100 + (a-200)*0.65 + 100;
    }
    else if(a>400 && a <=600)
    {
        b = 460 + (a-400)*0.80;
    }
    else
    {
        b = 850 + (a-600);
    }
    printf("%d", b);
    return 0;
}