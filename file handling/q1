#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char ch;
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int inWord = 0;
file = fopen("input.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        characters++;
   if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            if (ch == ' ')
                spaces++;
            inWord = 0;
        } else {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        }
    }
    fclose(file);
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
    printf("Spaces: %d\n", spaces);
return 0;
}
