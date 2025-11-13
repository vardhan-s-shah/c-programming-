#include <stdio.h>

void printDiv5(int num) {
    if (num > 100) return;
    if (num % 5 == 0)
        printf("%d\n", num);
    printDiv5(num + 1);
}

int main() {
    printDiv5(1);
    return 0;
}
