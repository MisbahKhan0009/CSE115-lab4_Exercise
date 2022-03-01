#include <stdio.h>
#include <math.h>

int main()
{
    int a, r;

    printf("\nEnter the radius of the circle: ");
    scanf("%d", &r);

    printf("\nEnter the side of the square: ");
    scanf("%d", &a);

    if (sqrt(2)*a <= (2 * r * r))
    {
        printf("\nThis square can be placed inside that circle.\n\n");
    }
    else
    {
        printf("\nThis square can not be placed inside that circle.\n\n");
    }

    return 0;
}
