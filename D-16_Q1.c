//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main (){
    int a, binary[32],i=0;
    printf("enter any number: ");
    scanf("%d",&a);
    while (a>0){
        binary[i] = a % 2;
        a = a/2;
        i++;
    }
    printf("\nbinary representation: ");
    for (i= i-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    return 0;
}