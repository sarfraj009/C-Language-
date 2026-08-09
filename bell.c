#include<stdio.h>
void main(){
	int a,b,r;
	
	printf("Enter any number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	r = a % b;
	printf("%d divide by %d gives remainder %d", a,b,r);
	
	
}
