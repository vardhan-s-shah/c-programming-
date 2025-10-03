#include <stdio.h>
int main()  {
	
	int arr[2][2]={  {1,2},
	                 {3,4}
						   } ;     
	
	int arr1[2][2]={  {3,4},
	                   { 5,6} };
	                   
	int arr2[2][2];
	for(int i=0;i<2;i++ )   {
	
		for(int j=0;j<2;j++)  {
		
	
	 arr2[i][j]=arr[i][j]-arr1[i][j];
	}                
		}
	 
		for(int i=0;i<2;i++ )   {
	
		for(int j=0;j<2;j++)  {
	
	printf("%d\n",arr2[i][j]);
	
}}  printf("\n");   }