//21.	Separate digits of a given no. e.g. 351—1,5,3
#include <stdio.h>
int main() {
	int num,digit;
	printf("write a number:");
	scanf("%d",&num);
	int first =1;
	while(num>0)  {
	digit=num%10;
	if (first) {
	
	printf("%d",digit); first =0; }  else {
		printf(",%d",digit);}
	num/=10;  }	
		
		return 0;
		
	}
	
	
	
	
	
	
	
