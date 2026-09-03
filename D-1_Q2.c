//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main (){
    int A,B;
    printf("enter value of A: ");
    scanf("%d",&A);
    printf("enter value of B: ");
    scanf("%d",&B);
    int sum,difference,product;
    float quotient;
    sum= A+B;
    if (A>B){
        difference=A-B;
        }
        else {
            difference=B-A;
        }
        product=A*B;
        quotient=A/B;
        printf("sum = %d\n",sum);
        printf("difference = %d\n",difference);
        printf("product = %d\n",product);
        printf("quotient = %f\n",quotient);
    return 0;

    }
