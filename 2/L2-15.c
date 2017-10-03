#include<stdio.h>
int main(){
	int a, b;
	double sum = 0.0, sum1 = 0.0, sum2 = 0.0;
	b = 1;
	scanf("%d", &a);
	while(b <= a){
		if (b%2 != 0) {
			sum1 += 1.0/((3 * b) - 2);
		}
		else {
			sum2 += (-1.0)/((3 * b) - 2);
		}
		b = b + 1;
		}
		sum = sum1 + sum2;
    printf("sum = %.3lf\n", sum);
	return 0;
}