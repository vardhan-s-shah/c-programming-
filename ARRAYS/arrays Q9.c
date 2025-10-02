#include <stdio.h>
int main(){
	
	int arr[5]={1,2,3,4,5};
	int arev[5];

		for(int j=0;j<=4;j++) {
		
		arev[j]=arr[4-j];}
	
	for(int k=0;k<=4;k++)
	printf("%d\n",arev[k]);
	

	
	
}