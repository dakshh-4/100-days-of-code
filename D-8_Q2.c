//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main(void)
{
    float first, second, third, largest;
    printf("Enter three numbers: ");
    if (scanf("%f %f %f", &first, &second, &third) != 3) {
        return 1;
    }
    if (first >= second && first >= third) {
        largest = first;
    } else if (second >= first && second >= third) {
        largest = second;
    } else {
        largest = third;
    }
    printf("The largest number is %.2f.\n", largest);
    return 0;
}







