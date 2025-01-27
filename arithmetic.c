#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;
    int sum, difference, product, quotient, remainder;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        remainder = num1 % num2;
    } else {
        printf("Division and modulus operations cannot be performed as the second number is zero.\n");
    }

    // Display results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    if (num2 != 0) {
        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);
    }

    return 0;
}
