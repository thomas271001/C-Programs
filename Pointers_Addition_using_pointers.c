#include <stdio.h>

void main() 
{
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;
    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;
    printf("Enter the first number: ");
    scanf("%d", ptr1);
    printf("Enter the second number: ");
    scanf("%d", ptr2); 
    *ptrSum = *ptr1 + *ptr2; 
    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);
}

