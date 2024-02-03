// Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
// Test Data :
// Input the Value of x :2
// Input the number of terms : 5
// Expected Output :
// the sum = -0.415873
// Number of terms = 5
// value of x = 2.000000

#include <stdio.h>

int main(void) {
    float x, t, d, sum; // Declare variables to store input and intermediate values.
    int i, terms;

    printf("Input the value of x: ");
    scanf("%f", &x);
    printf("\nInput number of terms: ");
    scanf("%d", &terms);

    sum = 1; // Initialize 'sum' to 1, as the first term is always 1.
    t = 1; // Initialize 't' to 1 for the first term.

    for (i = 1; i <= terms; i++) {
        d = (2 * i) * (2 * i - 1); // Calculate the denominator for the term.
        t = -t * x * x / d; // Calculate the term value.
        sum = sum + t; // Add the term to the sum.
    }

    printf("\nThe sum = %f\nNumber of terms = %d\nValue of x = %f\n", sum, terms, x);

    return 0;

}