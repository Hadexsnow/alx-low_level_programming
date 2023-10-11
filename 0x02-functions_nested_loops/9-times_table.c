#include <stdio.h>

void times_table(void);

int main(void) {
    // Call the function to print the 9 times table
    times_table();

    return 0;
}

void times_table(void) {
    // Loop through the numbers 0 to 9
    for (int i = 0; i <= 9; i++) {
        // Print the multiplication table for 9
        for (int j = 0; j <= 9; j++) {
            printf("%2d", i * j); // Print the result with at least 2 characters
            if (j < 9) {
                printf(", "); // Add a comma and space unless it's the last column
            }
        }
        printf("\n"); // Move to the next line after each row
    }
}
