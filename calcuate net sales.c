// Calculate net sales where net sales = gross sales – 10% discount of gross sales.
 #include <stdio.h>
 int main()  {
 	int a;
 	printf("gross sale:");
 	scanf("%d",&a);
 int discount = 0.1*a;
 
 printf("net sales:%d",a-discount);
 	
 }