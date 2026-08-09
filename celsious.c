#include<stdio.h>
int main(){
	float fahrenheit;
	printf("enter the tempture in fahrenheit : ");
	scanf("%f", &fahrenheit);
	float celsius=((fahrenheit)*5/9);
	printf(" Tempture in celsius is : %f", celsius);
}
