#include <stdio.h>
int main()   {
	
	int a,i,factorial;
	printf("write a number:");
	scanf("%d",&a);
	factorial=1;
	for(i=a;i>=1;i--) {  factorial*=i;
	} printf("%d",factorial);
	
	
	
}