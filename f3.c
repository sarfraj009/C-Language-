#include<stdio.h>
int sum(int a, int b);
int marks();  


void main(){
	int output = sum(15,88);
	printf("%d ", output);
	int output2 = marks();
	printf("%d",output2);
	
	
}
int sum(int a, int b){
	return (a + b);
}
int marks(){
	return 45;
}
