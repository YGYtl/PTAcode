#include <stdio.h>
int main()
{
	int i = 1;
	double c = 1.0;
	double sum1 = 0.0, sum2 = 0.0;
	double S = 0.0, a = 0.0;
	scanf("%lf", &a);
	if(a >= 1)
	{
		S = 1.0;
	}
	else{
		while(c > a)
	{
		if(i%2 == 0)
		{
			sum1 -= 1.0/i;
		}
		else{
			sum2 += 1.0/i;
		}
		c = 1.0/i;
		i = i + 3;
	}S = sum1 + sum2;
	}
	printf("sum = %.6f", S);
	return 0;
}