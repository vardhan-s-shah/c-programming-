#include<stdio.h>
int main(){
int r,c;
scanf("%d%d",&r,&c);
int a[r][c],add[r][c],sub[r][c],mul[r][c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(int i=0;i<r;i++)
for(int j=0;j<c;j++){
add[i][j]=a[i][j]+a[i][j];
sub[i][j]=a[i][j]-a[i][j];
}
for(int i=0;i<r;i++)
for(int j=0;j<c;j++){
mul[i][j]=0;
for(int k=0;k<c;k++)
mul[i][j]+=a[i][k]*a[k][j];
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
printf("%d ",add[i][j]);
printf("\n");
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
printf("%d ",sub[i][j]);
printf("\n");
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
printf("%d ",mul[i][j]);
printf("\n");
}
return 0;
}
