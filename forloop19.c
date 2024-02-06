// Write a program in C to display the n terms of a harmonic series and their sum.
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
// Sum of Series upto 5 terms : 2.283334

#include <stdio.h>

int main(void) {

int i, terms;
float sum = 0.0; // Initialize 's' to 0.0 to accumulate the sum.

printf("Input the number of terms: ");
scanf("%d", &terms);

for (i = 1; i <= terms; i++) {
    if (i < terms) {
        printf("1/%d + ", i); // Print the term with a plus sign.
        sum += 1/(float)i; // Calculate and add the term to the sum.
    }
    if (i == terms) {
        printf("1/%d ", i); // Print the last term without a plus sign.
        sum += 1/(float)i; // Calculate and add the term to the sum.
    }
}

printf("\nSum of series up to %d terms: %f", terms, sum);

return 0;

}