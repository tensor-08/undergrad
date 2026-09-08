#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if(a>=80 && a<=100)
        printf("Distinction\n");
    if(a>=60 && a <80)
        printf("First\n");
    if(a>=50 && a <60)
        printf("Second");
    if(a>=40 && a <50)
        printf("Third");
    if(a <40)
        printf("Fail");
    return 0;
}