#include<stdio.h>

int main(){

	int i, j, k, l;

	for(i = 5; i > 0; i--){
		
		for(j = 5; j >= i; j--){
			
			printf("%d ", j);
		}
		
		for(j = i; j > 1; j--){
			
			printf("%d ",i);
		}

		for(k = i; k > 1; k--){
			
			printf("%d ",i);
		}

		for(l = i+1; l <= 5; l++){

			printf("%d ",l);
		}
		printf("\n");
	}

	// -------------------------------------
	
	for(i = 1; i < 5; i++){
		
		for(j = 5; j > i; j--){
			
			printf("%d ", j);
		}

		for(k = i; k <= i; k++){
			
			printf("%d",i);
		}

		printf("\n");
	}
	return 0;
}
