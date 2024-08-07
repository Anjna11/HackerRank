#include<stdio.h>

int main(){
	
	int a, b, sum1, sub1;
	float p, q, sum2, sub2;
	
	scanf("%d %d", &a, &b);
	scanf("%f %f", &p, &q);

	sum1 = a + b;
	sub1 = a - b;

	sum2 = p + q;
	sub2 = p - q;
		
	printf("%d %d\n", sum1, sub1);
	printf("%.1f %.1f", sum2, sub2);

	return 0;
}
