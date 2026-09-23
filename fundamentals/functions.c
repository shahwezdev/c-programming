#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int a, b, n;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", add(a, b));
    printf("Product = %d\n", multiply(a, b));

    printf("\nEnter a number for factorial: ");
    scanf("%d", &n);

    if (n >= 0)
        printf("Factorial = %d\n", factorial(n));
    else
        printf("Factorial is not defined for negative numbers.\n");

    return 0;
}