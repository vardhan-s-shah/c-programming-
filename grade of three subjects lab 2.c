#include <stdio.h>
int main()  {
	int a,b,c;
	printf("write pcm marks:");
	scanf("%d %d %d",&a,&b,&c);
	int average = (a+b+c)/3 ;
	if ( a<35 ||  b<35 || c<35 )
	{printf("fail");	}            
	else {
	 if  (average >=70)
	printf("distinction");
	else if (average >=60)
	printf("first class");
	else if (average>=50)  {
		
		 printf("second class"); }
		else   printf("third class");
	}  }
	
	
	
