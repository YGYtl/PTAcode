#include <stdio.h>
#include<math.h>
int main()
{
	double x, result, b;
	scanf("%lf", &x);
	if ((x > 0) || (x == 0)){
		result = sqrt(x);
	}
	else{
		b = x + 1;
		result = pow( b, 2.0) + 2*x + 1 / x;
	}
	printf("f(%.2f) = %.2f\n", x, result);
	return 0;
}