#include<stdio.h>
void main(){
	int first, second;
	char op;
	printf("Enter the operator (+,-,/,*,%): ");
	scanf("%c", &op);
	
	printf("enter the first number : ");
	scanf("%d",&first);
	printf("enter the second number : ");
	scanf("%d",&second);

	
	
	
	switch(op){
		case'+':
			printf("sum is : %d ", first + second);
			break;
		case'-':
			printf("difference is : %d ", first - second);
			break;
		case'*':
			printf("multiplaction is : %d ", first * second);
			break;
		case'/':
			printf("division is : %d ", first / second);
			break;
		case'%':
			printf("remender is : %d ", first %second);
			break;	
		default :
				printf("invalid number ");
		
    }
}
