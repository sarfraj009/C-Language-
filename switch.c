#include<stdio.h>
void main(){
	int rating;
	printf("enter rating ");
	scanf("%d",&rating);
	switch(rating){
		case 1 :
		printf("poor");
		break;
		case 2:
			printf("average");
			break;
		case 3:
			printf("good");
			break;
		case 4:
			printf("better");
			break;
		case 5:
			printf("excellent");
			break;
			default :
				printf(" please enter a valid rating :  ");
			
	}	
}
