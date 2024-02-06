// Write a C program to display Pascal's triangle.
//  Test Data :
// Input number of rows: 5
// Expected Output :

//         1
//       1   1 
//     1   2   1 
//   1   3   3   1
// 1   4   6   4   1 

#include <stdio.h>

int main(void) {
    int row, c = 1, blk, i, j;

    printf("Input number of rows: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++) { // Outer loop for iterating over rows.
        for (blk = 1; blk <= row - i; blk++) // Inner loop for printing spaces.
            printf("  ");
        
        for (j = 0; j <= i; j++) { // Inner loop for generating and printing pattern.
            if (j == 0 || i == 0) // If it's the first column or first row, set c to 1.
                c = 1;
            else
                c = c * (i - j + 1) / j; // Calculate the next pattern value.
            printf("% 4d", c);
        }
        printf("\n");
    }
    return 0;
}