//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role role;

    int choice;

    printf("Select User Role:\n");
    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    role = choice;

    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;

        default:
            printf("Invalid Role!\n");
    }

    return 0;
}

