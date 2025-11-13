#include <stdio.h>

int fibon(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibon(n - 1) + fibon(n - 2);
}

void printfib(int i, int n) {
    if (i > n)
        return;
    printf("%d ", fib(i));
    printfib(i + 1, n);
}

int main() {
    int n;
    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);
    printfib(1, n);
    return 0;
}
