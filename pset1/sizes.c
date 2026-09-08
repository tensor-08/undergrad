#include <stdio.h>

int main(void)
{
    printf("Size of integer: %ld\n", sizeof(int));
    printf("Size of character: %ld\n", sizeof(char));
    printf("Size of float: %ld\n", sizeof(float));
    printf("Size of long integer: %ld\n", sizeof(long));
    printf("Size of double: %ld\n", sizeof(double));
    printf("Size of short integer: %ld\n", sizeof(short));
    return 0;
}