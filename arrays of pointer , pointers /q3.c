#include<stdio.h>
int main(){
int a[3][3]={{5,8,1},
             {9,3,7},
             {4,6,2}  },
             
*p=&a[0][0],max=*p,min=*p;

for(int i=0;i<9;i++){
     if(*(p+i)>max)max=*(p+i);
     if(*(p+i)<min)min=*(p+i);
}
printf("%d\n%d",max,min);

return 0;
}
