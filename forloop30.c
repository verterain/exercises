// Write a C program to find the Armstrong number for a given range of number.
// Test Data :
// Input starting number of range: 1
// Input ending number of range : 1000
// Expected Output :
// Armstrong numbers in given range are: 1 153 370 371 407

#include <stdio.h>

int main(void) {
    int num, r, sum, temp; // Declare variables for the input number, remainder, sum, and a temporary variable.
    int x, y; // Declare variables for the starting and ending range.

    printf("Input starting number of range: ");
    scanf("%d", &x);
    printf("\nInput ending number of range: ");
    scanf("%d", &y);

    printf("\nArmstrong numbers in given range are: ");

    for (num = x; num <= y; num++) {
        temp = num; // Set 'temp' to the current number for manipulation.
        sum = 0;

        while (temp != 0) {  // Start a loop to extract digits from 'temp'.
            r = temp % 10; // Get the last digit of 'temp'.
            temp = temp / 10; // Remove the last digit from 'temp'.
            sum = sum + (r * r * r);
        }
        if (sum == num) {
            printf("%d ", num);
        }

    }
    
    printf("\n\n");

    return 0;

}