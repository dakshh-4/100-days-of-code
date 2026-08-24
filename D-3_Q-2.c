//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(){
     int a=5,b=4;
    a= a*b;
    b= a/b;
    a= a/b;
    printf("%d\n",a);
    printf("%d",b);
}