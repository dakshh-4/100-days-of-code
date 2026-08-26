//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main()
{
float principle, rate, time;
printf("Enter the principle value : ");
scanf("%f", &principle);
printf("Enter the rate value:" );
scanf("%f", &rate);
printf("Enter the time value:");
scanf("%f", &time);
printf("simple_intrest = %.2f\n", (principle*rate*time)/100);
printf("compound intrest = %.2f\n", (principle *pow((1+rate/100),time)-principle));
}