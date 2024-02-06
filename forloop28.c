// Write a C program to find the 'Perfect' numbers within a given number of ranges.
// Test Data :
// Input the starting range or number : 1
// Input the ending range of number : 50
// Expected Output :
// The Perfect numbers within the given range : 6 28

#include <stdio.h>

int main(void) {
    int x, y, n, i, sum;

    printf("Input the starting range or number: ");
    scanf("%d", &x);
    printf("Input the ending range of number: ");
    scanf("%d", &y);

    printf("The perfect numbers within the given range: ");

    for (i = x; i <= y; i++) { // Loop through the numbers in the specified range.
        n = 1; // Initialize the divisor.
        sum = 0; // Initialize the sum of divisors.
        while (n < i) { // While the divisor is less than the number being checked.
            if (i % n == 0) // If 'n' is a divisor of 'i'.
                sum = sum + n; // Add 'n' to the sum.
            n++; // Increment the divisor.
        }
        if (sum == i) // If the sum of divisors is equal to the original number.
            printf("%d ", i);
    }
        printf("\n");
        return 0; 
}