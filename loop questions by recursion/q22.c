#include <stdio.h>

int countDigits(int num) {
    if (num == 0) return 0;
    return 1 + countDigits(num / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("1\n");
    else
        printf("%d\n", countDigits(n));
    return 0;
}
