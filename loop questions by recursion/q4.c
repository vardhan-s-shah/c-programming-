#include<stdio.h>
void f(int n,int i)
{if(i<=n){printf("%d ",i);f(n,i+1);}}
int main()
{f(15,1);
 return 0;}
