//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
    int a,b,i;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    for (i=1;;i++)
    {
        if(i%a==0&&i%b==0)
        {

            printf("\nLCM= %d",i); 
            break;
         }  
    }
}
