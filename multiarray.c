#include<stdio.h>
void main(){
	int arr[3][3] = { {10, 20, 30}, {40, 50, 60} , {44, 55, 88} };
	int i = 0;
	for(i;i<3;i++){
		int j=0;
		for(j;j<3;j++){
			printf("%d ", &arr[i][j]);
		}
	}
	
	
}
