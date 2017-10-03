#include<stdio.h>
int main(){
	int a, b;
	double sum = 0.0;;
	b = 1;
	scanf("%d", &a);
	while(b <= a){
		sum += 1.0/(2*b - 1);
		b++;
}
    printf("sum = %.6lf\n", sum);
	return 0;
}