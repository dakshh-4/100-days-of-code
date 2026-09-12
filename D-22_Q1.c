//Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
    int ip, i, n = 0, prod = 1, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &ip);
    temp = ip;
    while(ip > 0){
        n = ip%10;
        for(i = 1; i <= n ; i++){
            prod *= i;
        }
        sum += prod;
        prod = 1;
        ip /= 10;
    }
    if(temp == sum)
        printf("%d is a strong number!\n", temp);
    else
        printf("%d is not a strong number\n", temp);


    return 0;
}