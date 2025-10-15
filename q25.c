#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);  // space before %c to ignore newline

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %d\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result: %d\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result: %d\n", result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %d\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        case '%':
            if (b != 0) {
                result = a % b;
                printf("Result: %d\n", result);
            }
        }