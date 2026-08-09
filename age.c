#include<stdio.h>
void main(){
	int age;
	printf("Enter your age  :");
	scanf("%d" ,&age);
	
	if(age>=18){
		printf("you can vote");
		
		}
		else{
				if(age >=14){
				      printf("you are teenager");
			}
	
		
			else{
				printf("you are child");
			}
		}
	}
	

