#include <stdio.h>

int main(void) {
    int fib[50];
    int i;

    // Initialize the first two Fibonacci numbers
    fib[0] = 1;
    fib[1] = 2;

    // Generate the rest of the Fibonacci numbers
    for (i = 2; i < 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the first 50 Fibonacci numbers
    for (i = 0; i < 50; i++) {
        printf("%d", fib[i]);

        // Add a comma and space if i is not the last number
        if (i < 49) {
            printf(", ");
        }
    }

    // Print a new line at the end
    printf("\n");

    return 0;
}
