#include <stdio.h>

int isprime(int num, int i) {
    if (num < 2) return 0;
    if (i * i > num) return 1;
    if (num % i == 0) return 0;
    return isprime(num, i + 1);
}

int countprimes(int num) {
    if (num > 500) return 0;
    if (isprime(num, 2))
        return 1 + countprimes(num + 1);
    return countprimes(num + 1);
}

int main() {
    printf("Total prime numbers between 1 and 500: %d\n", countprimes(1));
    return 0;
}
