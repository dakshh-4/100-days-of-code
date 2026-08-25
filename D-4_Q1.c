//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main (){
    int a=10, b=12;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}