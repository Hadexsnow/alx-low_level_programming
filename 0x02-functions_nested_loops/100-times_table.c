#include "main.h"
#include <stdio.h>

void print_times_table(int n) {
    // Check if n is within the valid range
    if (n >= 0 && n <= 15) {
        // Loop through the rows
        for (int i = 0; i <= n; i++) {
            // Loop through the columns
            for (int j = 0; j <= n; j++) {
                int result = i * j;

                // Print the product with proper formatting
                if (j > 0) {
                    _putchar(' ');
                }

                if (result < 10 && j > 0) {
                    _putchar(' ');
                }

                if (result < 100) {
                    _putchar(' ');
                }

                printf("%d", result);

                // Add a comma and space if j is not the last column
                if (j < n) {
                    _putchar(',');
                }
            }

            // Move to the next line after each row
            _putchar('\n');
        }
    }
}
