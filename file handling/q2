#include <stdio.h>
int main() {
    FILE *file;
    char line[1000];
  file = fopen("output.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter lines of text (type 'exit' to stop):\n");
    while (1) {
        gets(line); 
        if (strcmp(line, "exit") == 0) {
            break; 
        }
        fputs(line, file);     
        fputs("\n", file);    
    }
    fclose(file);
    printf("Lines written to output.txt successfully.\n");

    return 0;
}
// accepting line at a time write 
