// Write a program in C to display a pattern like a diamond.

//     *
//    *** 
//   *****
//  *******
// ********* 
//  *******
//   *****
//    ***
//     * 

#include <stdio.h>

int main(void) {
    int i, j, r;

    printf("Input number of rows (half of the diamon): ");
    scanf("%d", &r);

    for (i = 0; i <= r; i++) {   // Loop to print the upper half of the diamond.
        for (j = 1; j <= r - i; j++) // Loop to print spaces before the asterisks.
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for (i = r - 1; i >= 1; i--) { // Loop to print the lower half of the diamond.
        for (j = 1; j <= r - i; j++) // Loop to print spaces before the asterisks.
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }
        return 0;
 }