#include<stdio.h>
void main(){
	int i=2;
	for(i;i<=100;i++){
		int j = 2;
		int status = 1;
		for(j; j<=i/2;j++){
			if(i%j == 0){
				status = 0;
				break;
				
			}
		}
		if(status == 1){
			printf("%d\n", i);
		
	}
  }   
}
