#include <stdio.h>
int main()  {
	
	int arr[5];
	for(int i=0;i<=4;i++) {
		scanf("%d",&arr[i]);
	}
	int i,j,temp;
	for( i=0;i<=4;i++) {
		int index= i;
		for(j=i+1;j<=4;j++)   {
			if(arr[j]<arr[index]) { index=j;
			}
			
			
		}
		temp=arr[index];
			arr[index]=arr[i];
			arr[i]=temp;
		
		
		
		
		
		
	}
	
	for(i=0;i<=4;i++)printf("%d",arr[i]);
	
	
}