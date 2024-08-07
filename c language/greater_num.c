#include<stdio.h>

int maxnum(int p, int q, int r, int s){

	int i,big;
	
	if(p > q){

		if(p > r){
			
			if(p > s){
				big = p;
			}
			else{
				big = s;	
			}
		}
		else{
			if(r > s){
				big = r;
			}
			else{
				big = s;
			}
		}
	}
	else{
		if(q > r){
			
			if(q > s){
				
				big = q;
			}
			else{
				big = s;
			}
		}
		else{
			if(r > s){
				big = r;
			}
			else{
				big = s;
			}
		}
	}
	return big;
}

void main(){

	int a, b, c, d, max;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	max = maxnum(a, b, c, d);
	printf("%d", max);

}
