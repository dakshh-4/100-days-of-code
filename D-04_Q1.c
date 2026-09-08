//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main(){
    int a,b;
    printf("enter value of a: ");
    scanf("%d",&a);
    printf("\nenter value of b: ");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nswapped value of a: %d\n",a);
    printf("swapped value of b: %d",b);
}
