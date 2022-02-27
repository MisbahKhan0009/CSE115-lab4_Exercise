#include <stdio.h>

int main()

{
    int a;

    printf("\nEnter the number of month: \n");
    scanf("%d", &a);

    if (a == 4 || a == 6 || a == 9 || a == 11)
    {
        printf("\nThis month has 30 days.\n\n");
    }
    else if (a == 2)
    {
        printf("\nThis month is 28 days.\n\n");
    }
    else if (a > 12 || a < 1)
    {
        printf("\nYou entered an invalid number");
    }
    else
    {
        printf("\nThis month has 31 days.\n\n");
    }

    return 0;
}