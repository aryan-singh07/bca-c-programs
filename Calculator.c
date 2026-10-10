#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
} 

For example:
Enter first number: 10
Enter an operator (+, -, *, /): +
Enter second number: 5
Result = 15.00
