double fn( double x, int n )
{
	int i, m;
	double sum;
	sum = 1.0, m = n;
	if(n==1)
	{
		sum = x;
	}
	else{
		while(m!=0)
		{
			sum = sum*x;
			m--;
		}
		if(n%2==0)
		{
			sum = -sum;
		}
		sum = sum + fn(x,n-1);
	}
	return sum;
}