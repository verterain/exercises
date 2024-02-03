// Write a program in C to make a pyramid pattern with numbers increased by 1.
//    1 
//   2 3 
//  4 5 6 
// 7 8 9 10 

#include <stdio.h>

int main(void) {
    int i, j, spc, rows, k, t = 1;  // Declare variables 'i' and 'j' for loop counters, 'spc' for spaces, 'rows' for user input, 'k' for loop counter, 't' for incrementing numbers.

    printf("Enter number of rows of the pyramid: ");
    scanf("%d", &rows);

    spc = rows + 4 - 1; // Calculate the initial number of spaces.

    for (i = 1; i <= rows; i++) { // Start a loop to generate rows.
        for (k = spc; k >= 1; k--) { // Loop to print spaces before the numbers.
           printf(" ");
        }
        for (j = 1; j <= i; j++) { // Loop to print numbers based on the current row.
            printf("%d ", t++); // Print the value of 't' and increment it.
        }
        printf("\n"); // Move to the next line for the next row.
        spc--; // Decrement the number of spaces for the next row.
    }
    return 0;
}

// In the above first for loop, the variable i is initialized to 1, and the loop will continue as long as i is less than or equal to the value of variable 'rows'. In each iteration of the outer loop, the loop variable k is initialized to the value of variable 'spc', and the loop will continue as long as k is greater than or equal to 1.

// In each iteration of the inner loop with variable k, the printf function will print space characters to the console. The number of space characters printed will be equal to the value of k.

// After the inner loop with variable k completes, another inner loop with variable j is started. In each iteration of this inner loop, the printf function will print the value of t to the console, followed by a space character. The value of t will be incremented by 1 in each iteration of the inner loop using the postfix increment operator (t++), so that each value printed is unique.

// After the second inner loop with variable j completes, the outer loop with variable i will print a newline character (\n) to create a new line.

// Finally, the value of 'spc' will be decremented by 1, and the process will repeat until the condition i<=rows is no longer true.