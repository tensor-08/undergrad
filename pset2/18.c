#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if(a <= 0)
        printf("freezing weather\n");
    else if(a>0 && a<=10)
        printf("very cold\n");
    else if(a>10 && a <=20)
        printf("cold\n");
    else if(a>20 && a <=30)
        printf("normal\n");
    else if(a>30 && a <=40)
        printf("hot\n");
    else
        printf("very hot\n");
    return 0;
}