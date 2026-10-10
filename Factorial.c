#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else if (n > 20) {
        printf("Please enter a number between 0 and 20.");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
