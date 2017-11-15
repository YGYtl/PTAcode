double calc_pow( double x, int n )
{
	double sum;
	if(n == 1)
		sum = x;
	else
		sum = x*calc_pow(x, n-1);
	return sum;
}