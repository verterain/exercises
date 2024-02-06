// Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.

//    *
//   ***
//  *****

#include <stdio.h> 

int main() {
    int i, j, n; // Declare variables to store input and control loop indices.

    // Prompt the user to input the number of rows for the pattern.
    printf("Input number of rows for this pattern :");
    scanf("%d", &n); // Read the value of 'n' from the user.

    for (i = 0; i < n; i++) // Loop for the number of rows.
    {
        for (j = 1; j <= n - i; j++) // Loop to print spaces before the stars.
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++) // Loop to print the stars.
            printf("*");

        printf("\n"); // Move to the next line after printing each row.
    }

    return 0; // Return 0 to indicate successful execution.
}
