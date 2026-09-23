#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)
        printf("Factorial = %d\n", factorial(n));
    else
        printf("Factorial is not defined for negative numbers.\n");

    printf("\nFibonacci series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}