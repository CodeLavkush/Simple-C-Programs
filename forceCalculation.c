#include <stdio.h>

float calculateForce(float mass);

void main(){
    float mass;

    printf("Enter body mass: ");
    scanf("%f", &mass);

    printf("Force of Attraction is %.2f", calculateForce(mass));
}

float calculateForce(float mass){
    return mass * 9.8;
}