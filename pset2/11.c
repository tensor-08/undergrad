#include <stdio.h>

int main(void)
{
    char a;
    scanf("%c", &a);
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("not vowel\n");
    }
    return 0;
}