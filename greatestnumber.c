#include<stdio.h>

void main(){

	int a,b,c;

	printf("Find the greatest number : ");

	scanf("%d%d%d",&a,&b,&c);

	if(a>=b && a>=c){

		printf("%d", a);

	}

	else if(b>=a && b>=c){

		printf("%d", b);

		

	}

	else{

		printf("%d\n", c);

	}
	return;

	

}
