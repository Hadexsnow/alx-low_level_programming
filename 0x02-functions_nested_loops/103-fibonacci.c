#include <stdio.h>

int main(void) {
    int fib1 = 1;
    int fib2 = 2;
    int sum = 0;

    while (fib2 <= 4000000) {
        // Check if fib2 is even
        if (fib2 % 2 == 0) {
            // Add the even term to the sum
            sum += fib2;
        }

        // Generate the next Fibonacci term
        int nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
    }

    // Print the sum of even-valued terms
    printf("Sum of even-valued Fibonacci terms below 4,000,000: %d\n", sum);

    return 0;
}
