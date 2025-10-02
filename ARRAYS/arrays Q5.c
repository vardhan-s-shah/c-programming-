#include <stdio.h>
int main()  {
	
	int arr[5][5]= {   {12,23,33,25,23},
	                    { 12,23,33,25,23}
						};
	int arr1[5][5]= { {34,23,57,13,46},
	                {34,23,57,13,46}
					};
	int arr2[5][5];
	for(int i=0;i<=4;i++)
	for(int j=0;j<=4;j++)
	arr2[i][j]=arr[i][j]+arr1[i][j];
	 
	for(int i=0;i<=4;i++) {
	
	for(int j=0;j<=4;j++)  {
	
	printf("%d,",arr2[i][j]);  }
	
	               printf("\n");   }
}
	
	
	
	
	
	
