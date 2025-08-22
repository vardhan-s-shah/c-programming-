#include <stdio.h>
int main() {
	
	//swap two numbers
	
	int a,b,c;
	printf("write two numbers:");
	scanf("%d %d",&a,&b);
	//using temporary variable
	
c=a;
a=b;
b=c;
printf("a= %d\n b=%d", a, b);
	
	
	
}   