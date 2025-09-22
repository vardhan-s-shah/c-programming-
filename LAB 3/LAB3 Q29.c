

#include <stdio.h>
int main() {
  int a, c = 1;
  printf("write a number: ");
  scanf("%d", &a);
  for(int i = 2; i < a; i++) {
      if(a % i == 0) {
          c = 0;
          break;
      }
  }
  if(c == 1)
      printf("it is prime");
  else
      printf("it is not prime");
}