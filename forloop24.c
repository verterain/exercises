// Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].
// Test Data :
// Input the value of x :2
// Input number of terms : 5
// Expected Output :
// The values of the series:
// 2
// -8
// 32
// -128
// 512
// The sum = 410

#include <stdio.h> // Include the standard input/output header file.
#include <math.h>  // Include the math functions header file.
int main() {
    int x, sum, ctr; // Declare variables to store input and intermediate results.

    int i, n, m, mm, nn; // Declare loop control variables and intermediate results.

    printf("Input the value of x :"); // Prompt the user for input.
    scanf("%d", &x); // Read the value of 'x' from the user.

    printf("Input number of terms : "); // Prompt the user for input.
    scanf("%d", &n); // Read the value of 'n' from the user.

    sum = x; // Initialize 'sum' to 'x' as the first term in the series.
    m = -1;  // Initialize 'm' to -1.

    printf("The values of the series: \n"); // Print a message.

    printf("%d\n", x); // Print the first term of the series.

    for (i = 1; i < n; i++) // Loop to calculate subsequent terms in the series.
    {
        ctr = (2 * i + 1); // Calculate the power of 'x' using the given formula.
        mm = pow(x, ctr); // Calculate the value of 'x' raised to the power 'ctr'.
        nn = mm * m;      // Multiply 'mm' with 'm'.
        printf("%d \n", nn); // Print the calculated term.
        sum = sum + nn;      // Add the term to the running sum.
        m = m * (-1);        // Toggle the value of 'm' between -1 and 1.
    }

    printf("\nThe sum = %d\n", sum); // Print the final sum.

    return 0; // Return 0 to indicate successful execution.
}
