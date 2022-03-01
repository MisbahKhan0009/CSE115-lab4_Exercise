#include <stdio.h>

int main()
{
    int a, b, c;

    printf("\nEnter 3 angle of triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c <= 180 && a + b + c > 0)
    {
        printf("\n%d degree, %d degree, %d degree makes a valid triangle!\n\n", a, b, c);
    }
    else
    {
        printf("\nPlease enter valid angels.\n\n");
    }

    return 0;
}
