#include<stdio.h>
int main(){
int a[4][4]={{16,2,3,13},
  {5,11,10,8},
  {9,7,6,12},
  {4,14,15,1}},
  b[16],k=0,t;
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
        b[k++]=a[i][j];
for(int i=0;i<15;i++)
for(int j=i+1;j<16;j++)
         if(b[i]>b[j]){t=b[i];b[i]=b[j];b[j]=t;}
for(int i=0;i<16;i++)
printf("%d ",b[i]);
return 0;
}
