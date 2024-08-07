#include<stdio.h>

int main(){

	char  arr[10][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int n;

	scanf("%d", &n);
	
	if(n > 9){

		printf("Greater than 9");
	}
	
	printf("%s", arr[n-1]);
	
	return 0;
}
