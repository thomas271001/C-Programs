#include <stdio.h>

void main()
{
    int WeekDay;
     
    printf("Enter weekday number (0-6): ");
    scanf("%d",&WeekDay);
     
    switch(WeekDay)
    {
        case 0: 
            printf("Sunday");
            break;
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        default:
            printf("Invalid weekday number.");
    }
    printf("\n");
}
