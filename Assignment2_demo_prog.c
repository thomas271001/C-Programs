#include <stdio.h>
#define PI 3.14
const int DAYS_IN_WEEK = 7;
int main() 
{
    int integerConstant = 4;
    char charConstant = 'A';
    const char *stringConstant = "This is a string constant.";
    float floatConstant = 3.14f;
    printf("Integer constant: %d\n", integerConstant);
    printf("Character constant: %c\n", charConstant);
    printf("String constant: %s\n", stringConstant);
    printf("Floating point constant: %f\n", floatConstant);
    printf("Value of PI (Symbolic constant): %f\n", PI);
    printf("Days in a week (Defined constant): %d\n", DAYS_IN_WEEK);
    return 0;
}
