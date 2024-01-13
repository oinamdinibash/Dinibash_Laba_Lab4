#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero!\n");
        return 0; // Returning 0 for simplicity in case of division by zero
    }
}

// Function to calculate the factorial of a non-negative integer
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    float num1, num2;
    char operator;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, !): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leading whitespace

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            break;
        case '!':
            if (num1 >= 0) {
                printf("%.0f! = %d\n", num1, factorial((int)num1));
            } else {
                printf("Error: Factorial is undefined for negative numbers.\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
