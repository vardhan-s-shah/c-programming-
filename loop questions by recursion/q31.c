#include <stdio.h>

int isprime(int num, int i) {
    if (num < 2) return 0;
    if (i * i > num) return 1;
    if (num % i == 0) return 0;
    return isprime(num, i + 1);
}

int sumprimes(int num) {
    if (num > 500) return 0;
    if (isprime(num, 2))
        return num + sumprimes(num + 1);
    return sumprimes(num + 1);
}

int main() {
    printf("Sum of primes: %d\n", sumprimes(1));
    return 0;
}
