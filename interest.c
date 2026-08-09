#include<stdio.h>
int main(){
	int p,r,t;
	printf("Enter the principle  : ");
	scanf("%d",&p);
	
	printf("Enter the rate  : ");
	scanf("%d",&r);
	
	printf("Enter the time : ");
	scanf("%d",&t);
	
	int interest = (p*r*t)/100;
	printf("average of the number is : %d", interest);
}
