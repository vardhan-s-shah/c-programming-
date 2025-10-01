#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);
    char str1[100]; 
    int i;

  for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
          str1[i] = str[i] + 32; 
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str1[i] = str[i] - 32; 
        } else {
            str1[i] = str[i]; 
        }
    }

    str1[i] = '\0'; 
    puts(str1);

    return 0;
}