#include <stdio.h>
#include <string.h>
int main()   {
	char st1[] = "ABA";
	char st2[15]; 
strcpy(st2,strrev(st1) );
	if ( strcmp(st2 , st1)==0){
		
		
		printf("this is palindrome string"); }
		
		else printf("nope");  
	}