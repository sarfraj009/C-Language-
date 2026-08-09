//#include<stdio.h>
//void main(){
//	char ch;
//	printf("Enter a character : ");
//	scanf("%c", &ch);
//	if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//		printf("vowel\n",ch);
//	}
//	else{
//		printf("constant\n", ch);
//	}
//}

#include<stdio.h>
void main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c", &ch);
	switch(ch){
		case'a':
			printf("Character is vowel");
			break;
		case'e':
			printf("Character is vowel");
			break;
		case'i':
			printf("Character is vowel");
			break;
		case'o':
			printf("Character is vowel");
			break;
		case'u':
			printf("Character is vowel");
		default:
			printf(" character is constant");		
	}
}
