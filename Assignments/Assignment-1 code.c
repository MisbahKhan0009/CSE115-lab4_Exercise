#include <stdio.h>

int main()
{
    int a, b, c;

    printf("\nEnter 3 sides of Triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c)
    {
        printf("So %d, %d, %d makes a valid triangle!\n\n", a, b, c);
    }
    else if ((b + c) > a)
    {
        printf("So %d, %d, %d makes a valid triangle!\n\n", a, b, c);
    }
    else if ((a + c) > b)
    {
        printf("So %d, %d, %d makes a valid triangle!\n\n", a, b, c);
    }
    else
    {
        printf("This triangle is invalid.\n\n");
    }

    return 0;
}
