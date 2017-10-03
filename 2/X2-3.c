#include <stdio.h>
int main()
{
	int m, n, i;
	double sum = 0;
	scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++){
    	sum += i*i + 1.0/i; 
	}
	printf("sum = %.6f", sum);
	return 0;
}
