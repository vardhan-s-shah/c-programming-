	
	
	
	
#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0}; // To store count of each note

    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    printf("Minimum number of notes required:\n");
    for (int i = 0; i < 9; i++) {
        if (count[i] > 0) {
            printf("%d note(s) of ?%d\n", count[i], notes[i]);
        }
    }

    return 0;
}