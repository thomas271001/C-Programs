#include <stdio.h>

int main()
{
    int size,a[15],i;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    printf("Enter the elements in the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    printf("The reversed array is: ");
    for(i=size-1;i>=0;i--){
        printf("%d\t",a[i]);
    }

    return 0;
}