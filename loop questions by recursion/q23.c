#include <stdio.h>

int sumDigits(int num) {
    if (num == 0) return 0;
    return (num % 10) + sumDigits(num / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumDigits(n));
    return 0;
}
