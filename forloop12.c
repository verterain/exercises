// Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

// The pattern like :

//    1
//    2 3
//    4 5 6
//    7 8 9 10

#include <stdio.h>

int main(void) {
    int i, j, rows, k = 1; // Declare variables 'i' and 'j' for loop counters, 'rows' for user input, 'k' for incrementing numbers.

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) { // Start a loop to generate rows.
        for (j = 1; j <= i; j++) { // Nested loop to print numbers based on the current row.
            printf("%d", k++); // Print the value of 'k' and increment it.
        }
        printf("\n");
    }
    return 0;
}