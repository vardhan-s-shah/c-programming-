#include <stdio.h>
#include <string.h>
int main()   {
	char st1[20] = "ABCdefg";
	char st2[20];
	strcpy(st2,strrev(st1) );
	for(int i=0;i<=strlen(st2);i++)  {
	
	printf("%c\n",st2[i]);  }
	
	
}
	