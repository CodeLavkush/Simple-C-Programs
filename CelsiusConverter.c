#include <stdio.h>

float getFahrenheit(float celsius);

void main(){
    float fahrenheit, celsius;
    printf("Welcome to celsius to fahrenheit converter!\n");
    printf("Enter Temperature in celsius: ");
    scanf("%f", &celsius);

    
    // fahrenheit = (celsius * 9/5) + 32;
    fahrenheit = getFahrenheit(celsius);

    printf("\nTemperature in fahrenheit is: %.2f", fahrenheit);
}

float getFahrenheit(float celsius){
    return (celsius * 9/5) + 32;
}