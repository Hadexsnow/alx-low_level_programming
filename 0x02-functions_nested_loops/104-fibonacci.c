#include <stdio.h>

int main(void) {
    int fib1 = 1;
    int fib2 = 2;

    // Print the first two Fibonacci numbers
    printf("%d, %d", fib1, fib2);

    // Print the rest of the Fibonacci numbers
    for (int i = 3; i <= 98; i++) {
        // Calculate the next Fibonacci term
        int nextTerm = fib1 + fib2;

        // Print the term
        printf(", %d", nextTerm);

        // Update fib1 and fib2 for the next iteration
        fib1 = fib2;
        fib2 = nextTerm;
    }

    // Print a new line at the end
    printf("\n");

    return 0;
}
