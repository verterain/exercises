// Write a C program to display the sum of n terms of even natural numbers.
// Test Data :
// Input number of terms : 5
// Expected Output :
// The even numbers are :2 4 6 8 10
// The Sum of even Natural Number upto 5 terms : 30

#include <stdio.h>

int main(void) {
    int i, terms, sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &terms);
    printf("\nThe even numbers are: ");

    for (i = 1; i <= terms; i++) {
        printf("%d ", 2 * i);
        sum += 2 * i;
    }
    printf("\nThe sum of even natural numbers up to %d terms is: %d\n", terms, sum);
    return 0;
}