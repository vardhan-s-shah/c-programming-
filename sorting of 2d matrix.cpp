#include <stdio.h>
int main()  {
	
	int arr[4][4]={   {3,5,10,12},
	                   {4,6,11,13},
					   {51,52,60,54},
					   {55,56,72,74}   };
					   
					   int i,j,temp,arr1[16],k=0;
					   for(i=0;i<=3;i++){
					   
					   for(j=0;j<=3;j++) {
					   	arr1[k++] = arr[i][j];}}
						   
						   for(i=0;i<15;i++){
						   for(j=0;j<15;j++){
						   if(arr1[j]>arr1[j+1]) {
						   
						      temp = arr1[j];
							  arr1[j]=arr1[j+1];
							  arr1[j+1] = temp; } }   }
											   
											   
		          for(i=0;i<16;i++)   { printf("%d\n",arr1[i]);
				  }
	
	
}
