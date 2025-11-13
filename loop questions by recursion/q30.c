#include <stdio.h>

int isprime(int num, int i) {
    if (num < 2) return 0;
    if (i * i > num) return 1;
    if (num % i == 0) return 0;
    return 
      isprime(num, i + 1);


}


void printprimes(int num) {
    if (num > 500) return;
    if (isprime(num, 2))
        printf("%d ", num);
    printprimes(num + 1);
}

int main() {
    printprimes(1);
    return 0;
}
