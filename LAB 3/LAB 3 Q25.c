// number is palindrome or not 
#include <stdio.h>
int main()   {
	
	
	int reversed=0,original,remainder,num;
	printf("enter a number:");
	scanf("%d",&original);
	//reverse a number 
	num=original;
	while (original!=0)  {
		remainder= original%10;
		reversed=reversed*10+remainder;
		original/=10;  }
		
		
		if (num == reversed)
	  
		  	printf("yes its p");
		else  printf("nope");
				
		
	}
		
	
	
	
	
	

