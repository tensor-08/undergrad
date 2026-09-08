#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b+c || b>a+c || c>a+b)
    {
        printf("This can form a circle\n");
        if(a == b && b == c)
        {
            printf("Equilateral\n");
        }
        else if(a==b || b==c || c==a)
        {
            printf("Isosceles\n");
        }
        else
        {
            printf("Scalen\n");
        }
    }
    else
    {
        printf("Not a triangle\n");
    }
    return 0;
}