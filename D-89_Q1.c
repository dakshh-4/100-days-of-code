//Show that enums store integers by printing assigned values
#include <stdio.h>

enum Days {
    MONDAY = 10,
    TUESDAY = 20,
    WEDNESDAY = 30,
    THURSDAY = 40
};

int main()
{
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);

    return 0;
}