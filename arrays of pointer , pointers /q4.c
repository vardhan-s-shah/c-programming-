#include<stdio.h>
int main(){
char *books[3];
char b1[50],b2[50],b3[50];
books[0]=b1;
books[1]=b2;
books[2]=b3;
for(int i=0;i<3;i++)
scanf("%s",books[i]);
for(int i=0;i<3;i++)
printf("%s\n",books[i]);
return 0;
}
