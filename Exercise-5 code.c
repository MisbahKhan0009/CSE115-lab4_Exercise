#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, z;
    double x_1, x_2;

    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    z = ((b * b) - 4 * a * c);
    x_1 = (-b + sqrt(z)) / (2 * a);
    x_2 = (-b - sqrt(z)) / (2 * a);

    if (z > 0)
    {
        printf("\nRoot of this equation is (%0.2lf, %0.2lf).\n\n", x_1, x_2);
    }
    else if (z == 0)
    {
        printf("\nRoot of this equation is %0.2lf.\n\n", x_1);
    }

    else
    {
        printf("\nThere is no real root for this equation.\n\n");
    }
}