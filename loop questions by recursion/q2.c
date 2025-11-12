#include<stdio.h>
void f(int n)
{if(n<=19)
{printf("%d ",n);f(n+2);} }
int main()
{f(1);
 return 0;
}
