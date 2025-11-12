#include<stdio.h>
void f(int n)
{if(n<=10 ){printf("%d ",n);f(n+1);}}
int main()
{     f(1); 
 return 0;
}  
