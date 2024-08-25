#include <stdio.h>

void main(){
    int income;
    float tax = 0;

    printf("Enter you Income: ");
    scanf("%d", &income);

    if(income > 250000 && income <= 500000){
        tax = (income - 250000) * 0.05;
    }
    else if(income > 500000 && income <= 1000000){
        tax = (500000 - 250000) * 0.05 + (income - 500000) * 0.20;
    }
    else if(income > 1000000){
        tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.20 + (income - 1000000) * 0.30;
    }

    printf("Your Income tax is %.2f", tax);
}