#include <stdio.h>

void var(int p, int q);
void novar(int x, int y);

int main(void)
{
    int a,b;
    char r;
    printf("Enter Variables: ");
    scanf("%d%d", &a, &b);
    printf("With variable?: ");
    scanf(" %c", &r);
    if(r == 'y' || r == 'Y')
    {
        var(a, b);
        return 0;
    }
    if(r == 'n' || r == 'N')
    {
        novar(a, b);
        return 0;
    }
    else
    {
        printf("say Y/y or N/n!\n");
        return 1;
    }
}

void var(int p, int q)
{
    int s = p;
    p = q;
    q = s;
    printf("a: %d\nb: %d\n", p, q);
}

void novar(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    printf("a: %d\nb: %d\n", x, y);
}