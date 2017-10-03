#include <stdio.h>
int main()
{
	double x, result;
	scanf("%lf", &x);
	if (x != 0){
		result = 1 / x;
	}
	else{
		result = x;
	}
	printf("f(%.1f) = %.1f\n", x, result);
	return 0;
}