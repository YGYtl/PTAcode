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
	int m, n, g=1;
	double f = 1.0;
	scanf("%d %d", &m, &n);
	g = fact(n-m);
	m = fact(m);
	n = fact(n);
	if (m == 2/n){
		m = g;
		f = n/m*m;
	}
	else{
		f = n/(g*m);
	}
	printf("result = %.0f", f);
	return 0;
}
