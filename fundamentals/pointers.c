#include <stdio.h>

int main() {
    int num;
    int *ptr;

    printf("Enter an integer: ");
    scanf("%d", &num);

    ptr = &num;

    printf("\nValue of num      = %d", num);
    printf("\nAddress of num    = %p", (void *)&num);
    printf("\nValue of ptr      = %p", (void *)ptr);
    printf("\nValue using ptr   = %d", *ptr);

    *ptr = *ptr + 10;

    printf("\n\nAfter modifying through pointer:");
    printf("\nValue of num      = %d\n", num);

    return 0;
}