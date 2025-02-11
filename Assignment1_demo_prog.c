#include <stdio.h>
int main()
{
    int integerVar = 123;
    char charVar = 'A';
    float floatVar = 3.1f;
    double doubleVar = 2.71828;
    unsigned unsignedVar = 4;
    signed signedVar = -7;
    long longVar = 12345L;
    long long longLongVar = 12345678LL;
    printf("Integer variable: %d\n", integerVar);
    printf("Character variable: %c\n", charVar);
    printf("Float variable: %f\n", floatVar);
    printf("Double variable: %lf\n", doubleVar);
    printf("Unsigned variable: %u\n", unsignedVar);
    printf("Signed variable: %d\n", signedVar);
    printf("Long variable: %ld\n", longVar);
    printf("Long long variable: %lld\n", longLongVar);
    return 0;
}

