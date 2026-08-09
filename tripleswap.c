#include<stdio.h>
void main(){
	int a =25;
	int b = 35;
	int c;
	
	c=a;
	a=b;
	b=c;
	
	printf("%d\n", a);
	printf("%d\n", b);
}
