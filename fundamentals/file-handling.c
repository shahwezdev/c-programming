#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    fprintf(file, "%s\n", text);
    fclose(file);

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nData stored in file:\n");

    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}