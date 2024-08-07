#include<stdio.h>
void update(int *a, int *b){
	int x;

	x  = *a + *b;
	*b = *a  - *b;
	*a = x;

	if(*b < 0){
		
		*b = -(*b);
	}
}

int main(){

	int a, b;
	int *pa,*pb;

	pa = &a, pb = &b;

	scanf("%d", &a);
	scanf("%d", &b);

	update(pa, pb);

	printf("%d\n", a);
	printf("%d", b);

	return 0;
}
