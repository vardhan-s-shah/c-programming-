#include <stdio.h>

int main() {
    int count = 0;
    for(int i = 2; i <= 500; i++) {
        int isPrime = 1;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            count++;
        }
    }
    printf("Total prime numbers between 1 and 500: %d\n", count);
    return 0;
}