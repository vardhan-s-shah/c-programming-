#include<stdio.h>
int f(int n)
{if(n==0)return 0;
 return 2*n+f(n-1);}
int main()
{printf("%d",f(10));
 return 0;}
