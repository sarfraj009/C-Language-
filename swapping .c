#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number : ");
	scanf("%d", &a);
	printf("Enter the second number : ");
	scanf("%d", &b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After swaping : \n");
	printf("first number =%d\n",a);
	printf("second number =%d\n",b);
	return 0;
	
}
