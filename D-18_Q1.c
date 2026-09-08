//Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
int a,i;
printf("enter any number: ");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
if (a%i==0)
{
    printf("\nFACTORS: %d",i);
}
}
return 0;
}
