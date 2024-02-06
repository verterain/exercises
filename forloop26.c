// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1 + 11 + 111 + 1111 + 11111
// The Sum is : 12345

#include <stdio.h>

int main(void) {
    long int j = 1, sum = 0;
    int i, terms;

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    for (i = 1; i <= terms; i++) {
        if (i == 1) {
            j = 1;
            printf("%ld +", j); 
        }
        else if (i == terms) {
            j = j * 10 + 1;
            printf(" %ld \n", j);
        }
        else {
            j = j * 10 + 1;
            printf(" %ld +", j);
        }
        sum += j;
    }
    printf("The sum is: %ld\n", sum);
}