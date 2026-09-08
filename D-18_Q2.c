//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main(){
    int a,b,i,hcf;
    printf("enter value of first number: ");
    scanf("%d",&a);
    printf("enter value of second number: ");
    scanf("%d",&b);
    for (i=1;i<=a&&i<=b;i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }
    printf("HCF is: %d",hcf);
    return 0 ;
}
