#include <stdio.h>

void printName(int count) {
    if (count == 0) return;
    printf("YourName\n");
    printName(count - 1);
}

int main() {
    printName(5);
    return 0;
}
