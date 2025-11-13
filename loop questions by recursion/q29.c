#include <stdio.h>

int is_prime(int num, int i) {
    if (num < 2) return 0;
    if (i * i > num) return 1;
    if (num % i == 0) return 0;
    return is_prime(num, i + 1);
}

int main() {
    int num = 17;
    if (is_prime(num, 2))
  printf("%d is Prime\n", num);
    else
        printf("%d is Not Prime\n", num);
    return 0;
}
