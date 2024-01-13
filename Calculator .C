#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    char operator;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = divide(num1, num2);
            } else {
                printf("Error: Division by zero\n");
                return 1; // Exit program with an error code
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1; // Exit program with an error code
    }

    // Output the result
    printf("Result: %.2f\n", result);

    return 0; // Exit program successfully
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
