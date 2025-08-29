#include <stdio.h>
int main() {
int i,n,f;
f=1;
printf("write a number:");
scanf("%d",&n);
for(i=n;i>=1;i--)   { f*=i; } printf("%d",f)   ;



}
