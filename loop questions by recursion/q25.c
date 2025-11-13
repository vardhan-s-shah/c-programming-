#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int num = 12321;
    if (num == reverse(num, 0))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
