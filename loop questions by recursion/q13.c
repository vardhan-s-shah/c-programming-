#include <stdio.h>

int sumDiv13(int num) {
    if (num > 100) return 0;
    if (num % 13 == 0)
        return num + sumDiv13(num + 1);
    return sumDiv13(num + 1);
}

int main() {
    int result = sumDiv13(1);
    printf("%d\n", result);
    return 0;
}
