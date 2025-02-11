#include <stdio.h>

void main() 
{
    int num1, num2;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter the first number: ");
    scanf("%d", ptr1);
    printf("Enter the second number: ");
    scanf("%d", ptr2); 
    if(*ptr1 > *ptr2)
	{
	    printf("%d is the Maximum\n", *ptr1);
	} 
	else
	{
		printf("%d is the Maximum\n", *ptr2);

	}
}

