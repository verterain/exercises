// Write a C program to determine whether a given number is prime or not.
//  Test Data :
// Input a number: 13
// Expected Output :
// 13 is a prime number.

#include <stdio.h>

int main(void) {
    int x, i, counter = 0;

    printf("Input a number: ");
    scanf("%d", &x);

    for (i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            counter++;
            break;
        }
    }
    if (counter == 0 && x != 1)
        printf("\n%d is a prime number.\n", x);
    else
        printf("\n%d is not a prime number.\n", x);
    
    return 0;
}