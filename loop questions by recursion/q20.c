#include <stdio.h>

int sumDiv3(int num) {
    if (num > 100) return 0;
    if (num % 3 == 0)
        return num + sumDiv3(num + 1);
    return sumDiv3(num + 1);
}

int main() {
    int result = sumDiv3(1);
    printf("%d\n", result);
    return 0;
}
