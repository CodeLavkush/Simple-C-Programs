#include <stdio.h>

void main(){
    float fahrenheit, celsius;
    printf("Welcome to celsius to fahrenheit converter!\n");
    printf("Enter Temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("\nTemperature in fahrenheit is: %.2f", fahrenheit);
}