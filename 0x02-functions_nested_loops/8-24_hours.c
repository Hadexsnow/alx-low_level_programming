#include <stdio.h>

void jack_bauer(void);

int main(void) {
    // Call the function to print Jack Bauer's day
    jack_bauer();
    
    return 0;
}

void jack_bauer(void) {
    // Loop through the hours (00 to 23)
    for (int hour = 0; hour < 24; hour++) {
        // Loop through the minutes (00 to 59)
        for (int minute = 0; minute < 60; minute++) {
            // Print the current time
            printf("%02d:%02d\n", hour, minute);
        }
    }
}
