// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
// Test Data :
// Input the number or terms :5
// Expected Output :
// 9 99 999 9999 99999
// The sum of the series = 111105

#include <stdio.h>

int main(void) {
    long int terms, i, t = 9; // Declare variables to store input, control loop indices, and temporary value.
    int sum = 0; // Initialize a variable to store the sum.

    printf("Enter the number of terms: ");
    scanf("%ld", &terms);

    for (i = 1; i <= terms; i++) { // Loop for the number of terms.
        sum += t; // Add 't' to the sum.
        printf("%ld ", t); // Print the current value of 't'.
        t = t * 10 + 9; // Update 't' for the next iteration.
    }
    printf("\nThe sum of the series = %d", sum);
    return 0;
}