#include <stdio.h>
#include <math.h> 
double fn(double s, double i);
int main()
{
	double s, i;
	s = 0.0;
	i = 1.0;
	scanf("%lf", &s);
    double sum, d;
    sum = 1.0;
	while(fn(s,i) >= 0.00001)
	{
		sum = sum + fn(s,i);
		i++;
	}
	sum = sum + fn(s,i);
	printf("%.4f", sum);
    return 0;
}
double fn(double s, double i)
{
	double d, k, x;
	k = 1.00000;
	d = 0.00000;
    for(x=1.0; x<=i; x++)
    {
    	k = k*x;
	}
	d = pow(s,i)/k;
	return d;
}