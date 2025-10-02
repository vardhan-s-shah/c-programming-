#include <stdio.h>
#include <string.h>
int main() {
	
	char str[100];
	gets(str);
	char str1[100];
	gets (str1);
	int result = strcmp(str,str1);
	if (result<0) { printf("str is lex. lower than str1");
	}
	else if (result >0) { printf("str is lex.greater than str1");
	}
	
	
	
	
	
	
}