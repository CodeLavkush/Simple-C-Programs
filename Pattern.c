#include <stdio.h>

void printPattern(int n);

void main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    printPattern(n);
}

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}