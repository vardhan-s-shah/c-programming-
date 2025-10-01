#include <stdio.h>
#include <string.h>

int main() {
    char str[10] ;
    gets(str);
    int f = 0, g = 0, e = 0, r = 0, t = 0;
    char q = 'a', w = 'e', p = 'i', m = 'o', k = 'u';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == q) {
            f++;
        } else if (str[i] == w) {
            g++;
        } else if (str[i] == p) {
            e++;
        } else if (str[i] == m) {
            r++;
        } else if (str[i] == k) {
            t++;
        }
    }

    printf("a%d e%d i%d o%d u%d\n", f, g, e, r, t);
    return 0;
}