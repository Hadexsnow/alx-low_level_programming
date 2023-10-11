#include <stdio.h>

int main(void) {
    int sum = 0;

    // Loop through numbers below 1024
    for (int i = 0; i < 1024; i++) {
        // Check if the number is a multiple of 3 or 5
        if (i % 3 == 0 || i % 5 == 0) {
            // Add the number to the sum
            sum += i;
        }
    }

    // Print the sum
    printf("Sum of multiples of 3 or 5 below 1024: %d\n", sum);

    return 0;
}
