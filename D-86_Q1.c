//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. ADD");
    printf("\n2. SUBTRACT");
    printf("\n3. MULTIPLY");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADD:
            printf("Addition = %d", a + b);
            break;

        case SUBTRACT:
            printf("Subtraction = %d", a - b);
            break;

        case MULTIPLY:
            printf("Multiplication = %d", a * b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}