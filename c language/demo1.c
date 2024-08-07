#include<stdio.h>

int main(){

	char c1[50], c2[50], c3[50];
	
	scanf("%[^\n]s", &c1);
	scanf("\n");

	scanf("%[^\n]s", &c2);
	scanf("\n");

	scanf("%[^\n]s", &c3);

	printf("%s\n%s\n%s", c1, c2, c3);

		
	return 0;
}
