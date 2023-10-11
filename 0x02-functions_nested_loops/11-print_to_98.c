#include <stdio.h>

void print_to_98(int n);

int main(void) {
    // Example: Print natural numbers from 5 to 98
    print_to_98(5);

    return 0;
}

void print_to_98(int n) {
    // Check if n is less than 98
    if (n <= 98) {
        // Loop from n to 98
        for (int i = n; i <= 98; i++) {
            printf("%d", i);

            // Add a comma and space if i is not the last number
            if (i < 98) {
                printf(", ");
            }
        }
    } else {
        // Loop from n to 98
        for (int i = n; i >= 98; i--) {
            printf("%d", i);

            // Add a comma and space if i is not the last number
            if (i > 98) {
                printf(", ");
            }
        }
    }

    // Print a new line at the end
    printf("\n");
}
