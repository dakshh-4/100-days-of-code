//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
    int a;
    printf("etnter a year: ");
    scanf("%d",&a);
    if (a%4==0){
        printf("it is a leap year");
    }
    else
    {
        printf("it's not a leap year");
    }
    return 0;
}
