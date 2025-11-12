#include<stdio.h>
int main(){
char name[100];
int i=0,start=0;
scanf("%[^\n]",name);
while(name[i]!='\0'){
if(name[i]==' '){
printf("%c. ",name[start]);
start=i+1;
}
i++;
}
while(name[start]!='\0'){
printf("%c",name[start]);
start++;
}
return 0;
}
