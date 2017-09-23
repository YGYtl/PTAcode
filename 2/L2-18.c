#include<stdio.h>
double fact(int a)
{
	int i;
	double result = 1.0;
	for (i=1; i<=a; i++){
		result = result*i;
	}
	return result;
}

int main(void)
{
	int m, n;
	double g, f = 1.0;
	scanf("%d %d", &m, &n);
	f = fact(n)/(fact(n-m)*fact(m));
	printf("result = %.0f", f);
	return 0;
}