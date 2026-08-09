#include<stdio.h>
void main(){
	
	char ch;
	printf("Enter any alphabet :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z'){
		
		printf("Alphabet is upercase : ");
	}
	else if(ch>='a' && ch<='z'){
		
		printf("Alphabet is lowercase : ");
	}
	else{
		
		printf("Invalid Alphabet : ");
	}
}
