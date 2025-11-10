#include <stdio.h>

int main() {
    FILE *file;
    char line[1000];

    file = fopen("example.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); 
    }

    fclose(file);
    return 0;

}
