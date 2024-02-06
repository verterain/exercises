// Write a C program that displays the n terms of square natural numbers and their sum.
// 1 4 9 16 ... n Terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// The square natural upto 5 terms are :1 4 9 16 25
// The Sum of Square Natural Number upto 5 terms = 55

#include <stdio.h>

int main(void) {
    int i, terms, sum = 0;

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    for (i = 1; i <= terms; i++) {
        printf("%d ", i * i);
        sum += i * i;
    }
    printf("\nThe Sum of Square Natural Number up to %d terms = %d\n", terms, sum);
    return 0;
}