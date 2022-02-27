#include <stdio.h>

int main()

{
    int a, x, y;

    printf("\nEnter a number: ");
    scanf("%d", &a);

    x = a % 5;
    y = a % 11;

    if (x == 0 && y == 0)
    {
        printf("%d is a multiple of both 5 and 11!\n\n", a);
    }

    else if (x == 0)
    {
        printf("%d is a multiple of only 5!\n\n", a);
    }
    else if (y == 0)
    {
        printf("%d is a multiple of only 11!\n\n", a);
    }

    else
    {
        printf("%d is neither multiple by 5 nor 11!\n\n", a);
    }

    return 0;
}