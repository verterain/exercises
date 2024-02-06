// Write a program in C to find the sum of the series [x - x^3 + x^5 + ......].
// Test Data :
// Input the value of x :3
// Input number of terms : 5
// Expected Output :
// The sum is : 16.375000

#include <stdio.h>

int main(void) {
    float x, sum, no_row; // Declare variables to store input and intermediate results.
    int i, terms;

    printf("Input the value of x: ");
    scanf("%f", &x);
    printf("\nInput number of terms: ");
    scanf("%d", &terms);

    sum = 1; // Initialize 'sum' to 1 as the first term in the series.

    no_row = 1; // Initialize 'no_row' to 1 for the first term calculation.

    for (i = 1; i < terms; i++) { // Loop to calculate subsequent terms in the series.
         no_row = no_row * x / (float)i; // Calculate the next term using the given formula.
         sum = sum + no_row;
    }
    printf("\nThe sum is: %f\n", sum);
    return 0;
}