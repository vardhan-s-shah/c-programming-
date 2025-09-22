#include <stdio.h>
int main() {
    int prime, j,sum;
    sum=0;
    for(int i = 1; i <= 500; i++) {
        if(i == 1) {
            printf("1 is neither prime nor composite\n");
            continue;
        }
        prime = 1;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                prime = 0;
                
                break;
            }
        }
        if(prime) {
          sum+=i;} } printf("%d\n", sum);
        
    
    return 0;
}