//Write a program to convert temperature from Celsius to Fahrenheit.;
#include <stdio.h>
int main(){
float temprature_in_celsius , temprature_in_fahrenheit;
printf ("enter temprature in degree celsius");
scanf("%f",&temprature_in_celsius);
temprature_in_fahrenheit= (temprature_in_celsius * 9/5) +32;
printf("temprature_in_fahrenheit: %.2f", temprature_in_fahrenheit);
return 0;
}