#include <stdio.h>
int main ()   { 

int a,i,sum;
sum=0;
printf("write a number:");
scanf("%d",&a);

for(i=1;i<=a;i+=2)  { sum+=i;} printf("%d\n",sum);




}