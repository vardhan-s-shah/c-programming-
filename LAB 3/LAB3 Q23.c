#include <stdio.h>
int main()   {
	int a,b,sum=0;
	printf("write a number:");
	scanf("%d",&a);
	
	
	while(a>0) {sum+=a%10; a/=10;
	
	}
	printf("%d",sum);
	
	
}