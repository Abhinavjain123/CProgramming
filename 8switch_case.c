#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating(1-5)\n");
    scanf("%d", &rating);
    switch (rating)                                      // can only integer or character
    {
        case 1:                                          // same for case also
            printf("your rating is %d \n", rating);
            break;                                       // not a must (depends)         
        case 2:
            printf("your rating is %d \n", rating);
            break;                                       // without break all execute after it
        case 3:
            printf("your rating is %d \n", rating);
            break;
        case 4:
            printf("your rating is %d \n", rating);
            break;
        case 5:
            printf("your rating is %d \n", rating);
            break;
        default:
            printf("Invalid rating");
    }
    return 0;
}
// if break is not used then it execute all case after the condition is meet
