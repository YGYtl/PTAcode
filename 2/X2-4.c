#include<stdio.h>
int main(void)
{
	int a, i, x;
	x = 1;
	float sum = 0.0, g = 1.0;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		sum += g*i*1.0/x;
		x += 2;
		g = -g;
	}
	printf("%.3f", sum);
	return 0;
}
