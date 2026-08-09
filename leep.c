#include<stdio.h>
void main(){
	int year;
	printf("Enter Year :");
	scanf("%d", &year);
	
	if((year % 400 == 0) || (year % 100 != 0 && year % 4 ==0)){
		printf("you enter a leep year : ");
		
	}
	else{
		printf("please enter a leep year :");
	}
	
}
