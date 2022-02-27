#include <stdio.h>

int main()
{
    int a, x, y;

    printf("\nEnter your number: ");
    scanf("%d", &a);

    x = a % 2;
    y = a % 5;

    if (x == 0 && y == 0)
    {
        printf("Sorry, your number is invalid. It's a multiple of both 2 or 5\n\n");
    }

    else if (x == 0 || y == 0)
    {
        printf("Your number is a multiple of either 2 or 5\n\n");
    }

    else
    {
        printf("Sorry, your number is invalid.\n\n");
    }

    return 0;
}