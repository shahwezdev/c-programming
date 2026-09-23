#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("\nArray elements: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum = %d", sum);
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nAverage = %.2f\n", (float)sum / n);

    return 0;
}