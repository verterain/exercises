// Write a C program to check whether a given number is an Armstrong number or not.
// Test Data :
// Input a number: 153
// Expected Output :
// 153 is an Armstrong number.

#include <stdio.h>

int main(void) {
    int x, r, temp, sum = 0;

    printf("Input a number: ");
    scanf("%d", &x);

    temp = x;

    while (x != 0) {
        r = x % 10;
        sum = sum + (r * r * r);
        x = x / 10;
    }

    if (sum == temp) 
        printf("\n%d is an Armstrong number.\n", temp);
    else 
        printf("\n%d is not an Armstrong number.\n");

}