#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(a>0 && b>0)
        printf("1st\n");
    else if(a<0 && b>0)
        printf("2nd\n");
    else if(a<0 && b<0)
        printf("3rd\n");
    else
        printf("4th\n");
    return 0;

}