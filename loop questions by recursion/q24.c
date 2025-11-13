#include <stdio.h>

void printDigits(int num) {
    if (num == 0) return;
    printf("%d\n", num % 10);
    printDigits(num / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printDigits(n);
    return 0;
}
