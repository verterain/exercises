// Write a C program to calculate the factorial of a given number.
// Test Data :
// Input the number : 5
// Expected Output :
// The Factorial of 5 is: 120

#include <stdio.h>

int main(void) {
    int i, n, factorial = 1; // Declare variables 'i' for loop counter, 'f' to store factorial, 'num' for user input.

    printf("Input the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // Start a loop to calculate factorial.
        factorial *= i; // Calculate factorial
    }
    printf("\nThe factorial of %d is: %d\n", n, factorial);
    return 0;
}