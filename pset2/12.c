#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    scanf("%c", &a);
    if(isalpha(a) != 0)
    {
        printf("%c is an alphabet\n", a);
        if(islower(a) != 0)
        {
            printf("%c\n", toupper(a));
        }
        else if(isupper(a) != 0)
        {
            printf("%c\n", tolower(a));
        }
    }
    else
    {
        printf("%c is not an alphabet\n", &a);
    }
    return 0;
}