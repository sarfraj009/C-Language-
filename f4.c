#include <stdio.h>
void table(int n)
{
    int i = 1;
    for(i; i<=10;i++){
    	printf("%d X %d = %d\n", n , i, n * i);
	}
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    table(num);
}
