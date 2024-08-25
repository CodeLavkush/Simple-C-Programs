#include <stdio.h>

void main(){
    float principleAmount = 430544;
    float rateOfInterest = 34.55;
    int simpleInterestAmt;
    int noOfYears = 2;

    printf("Enter Amount: ");
    scanf("%f", &principleAmount);

    printf("Enter rate of Interest: ");
    scanf("%f", &rateOfInterest);

    printf("Enter no. of Years: ");
    scanf("%d", &noOfYears);

    simpleInterestAmt = (principleAmount * rateOfInterest * noOfYears); 

    printf("Your Simple interest is %d", simpleInterestAmt);
}