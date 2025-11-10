#include <stdio.h>
#include <string.h>

#define SIZE 10


struct Cricketer {
    char name[50];
    int age;
    int testMatches;
    float averageRuns;
};

int main() {
    struct Cricketer players[SIZE] = {
        {"Virat Kohli", 35, 110, 54.3},
        {"rishabh", 34, 120, 52.1},
        {"andre", 36, 95, 59.7},                 // example
        {"Kane Williamson", 34, 90, 53.8},
        {"Ben Stokes", 33, 80, 38.5},
        {"Rohit Sharma", 36, 70, 46.2},
        {"David Warner", 37, 103, 45.6},
        {"quinton", 30, 50, 47.9},
        {"Marnus Labuschagne", 31, 40, 55.4},
        {"Shubman Gill", 25, 20, 42.3}
    };

   
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (players[i].averageRuns > players[j].averageRuns) {    // ascending order creation 
// swaping by temp variable
                struct Cricketer temp = players[i];
                players[i] = players[j];                               
                players[j] = temp;
           } }   }

    
    printf("Cricketers sorted by average runs:\n");
    
    printf("%-20s %-5s %-10s %-10s\n", "Name", "Age", "Matches", "Avg Runs");   
    for (int i = 0; i < SIZE; i++) {
        printf("%-20s %-5d %-10d %-10.2f\n",
               players[i].name,
               players[i].age,
               players[i].testMatches,
               players[i].averageRuns);
    }

    return 0;
}
