#include <stdio.h>

int main()
{
    int age;

    printf("\nPlease enter your age: ");
    scanf("%d", &age);

    if (age >= 25 && age <= 45)
    {
        printf("Congratulations, you are eligible!\n\n");
    }
    else if (age <25)
    {
        printf("We're sorry, you're too young for this job!\n\n");
    }
    else
    {
        printf("We're sorry, you're too old for this job!\n\n");
    }
    return 0;
    
}