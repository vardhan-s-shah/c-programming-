//FIBONACI SERIES 
#include <stdio.h>
int main()   {
	int a,first=0,second=1,next,i;
	printf("enter terms of series:");
	scanf("%d",&a);
	for(i=0;i<a;i++){
	printf("%d",first);
	next= first+second;
	first=second;
	second=next; }
	
	
		
	
	
	
	
}