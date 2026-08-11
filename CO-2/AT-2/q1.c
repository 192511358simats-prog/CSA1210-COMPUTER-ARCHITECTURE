#include <stdio.h>

int main() {
    int a = 120;
    int b = 50;

    // Perform 8-bit signed addition
    signed char num1 = (signed char)a;
    signed char num2 = (signed char)b;
    signed char result = num1 + num2;

    printf("===== Signed Integer Addition (8-bit) =====\n\n");

    printf("First Number  : %d\n", num1);
    printf("Second Number : %d\n", num2);
    printf("Result        : %d\n\n", result);

    // Overflow Detection
    if ((num1 > 0 && num2 > 0 && result < 0) ||
        (num1 < 0 && num2 < 0 && result > 0)) {

        printf("Overflow Detected!\n");
        printf("The result cannot be represented in 8-bit signed integer.\n");
    }
    else {
        printf("No Overflow.\n");
    }

    return 0;
}
