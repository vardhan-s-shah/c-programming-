#include <stdio.h>

void countGender   (char sex[], int index, int *boys, int *girls) {
    if (index == 50) 
      return;
    if (sex[index] == 'M' || sex[index] == 'm') (*boys)++;
    else if (sex[index] == 'F' || sex[index] == 'f') (*girls)++;
  
    countGender(sex, index + 1, boys, girls);
}

int main() {
    char sex[50];
    int i, boys = 0, girls = 0;
    for (i = 0; i < 50; i++)
        scanf(" %c", &sex[i]);
    countGender(sex, 0, &boys, &girls);    // calling the function
    printf("Boys = %d\nGirls = %d\n", boys, girls);
    return 0;
}
