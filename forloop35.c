// Write a program in C to display the first n terms of the Fibonacci series.
// Fibonacci series 0 1 2 3 5 8 13 .....
// Test Data :
// Input number of terms to display : 10
// Expected Output :
// Here is the Fibonacci series upto to 10 terms :
// 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>

int main(void) {
    int n, i;
    int firstTerm = 0, secondTerm = 1, nextTerm; // Declare variables for previous, current, and next terms, as well as loop counters.

    printf("Input number of terms to display: ");
    scanf("%d", &n);

    printf("%5d %5d", firstTerm, secondTerm);

    for (i = 3; i <= n; i++) { // Loop to generate the Fibonacci series starting from the third term.
        nextTerm = firstTerm + secondTerm; // Calculate the next term.
        printf("%5d", nextTerm); // Print the next term.
        firstTerm = secondTerm; // Update the previous term.
        secondTerm = nextTerm; // Update the current term.
    }
    printf("\n");

    return 0;
}