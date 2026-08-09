#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number : ");
	scanf("%d",&a);
	
	printf("Enter the second number : ");
	scanf("%d",&b);
	
	printf("Enter the third number : ");
	scanf("%d",&c);
	
	int average = (a+b+c)/3;
	printf("average of the number is : %d", average);
}
