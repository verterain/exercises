// Write a C program to make such a pattern as a pyramid with an asterisk.

//    * 
//   * * 
//  * * * 
// * * * *

#include <stdio.h>

int main(void) {
    int i, j, spc, rows, k;  // Declare variables 'i' and 'j' for loop counters, 'spc' for spaces, 'rows' for user input, 'k' for loop counter, 't' for incrementing numbers.

    printf("Enter number of rows of the pyramid: ");
    scanf("%d", &rows);

    spc = rows + 4 - 1; // Calculate the initial number of spaces.

    for (i = 1; i <= rows; i++) { // Start a loop to generate rows.
        for (k = spc; k >= 1; k--) { // Loop to print spaces before the numbers.
           printf(" ");
        }
        for (j = 1; j <= i; j++) { // Loop to print asterisks based on the current row.
            printf("* "); // Print the asterisk followed by a space
        }
        printf("\n"); // Move to the next line for the next row.
        spc--; // Decrement the number of spaces for the next row.
    }
    return 0;
}