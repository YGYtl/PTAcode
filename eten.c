#include<stdio.h>
int main(){
	int a;
	double sum, b;
	b = 0, sum = 0;
	scanf("%d", &a);
	while(b < a){
		b += 1;
		sum += 1/b;
	}
	printf("sum = %.6lf", sum);
	return 0;
} 