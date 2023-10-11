#include <stdio.h>

int add(int num1, int num2);

int main(void) {
    int result = add(5, 7);
    printf("Result: %d\n", result);

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}
