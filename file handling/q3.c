#include <stdio.h>

int main() {
    FILE *file;
    char line[1000];

    file = fopen("output.txt", "r"); // Open file for reading
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); // Print each line
    }

    fclose(file);
    return 0;
}