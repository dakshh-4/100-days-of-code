//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main(){
    char a [100];
    printf("enter any number: ");
    scanf("%s",a);
    for (int i=0;a[i]!='\0';i++)
    if (a[i] == '0')
            a[i] = '1';
        else if (a[i] == '1')
            a[i] = '0';
    

    printf("1's complement: %s\n", a);

    return 0;

}