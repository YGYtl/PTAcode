double fact( int n )
{
	double s = 1.0;
	if(n==0||n==1)
	{
		s = 1;
	}
	else{
		s = n*fact(n-1);
	}
	return s;
} 
 
double factsum( int n )
{
	double a, b, i, sum, k;
	sum = 0.0;
	for(i=1; i<=n; i++)
	{
		k = 1.0;
		for(a=1; a<=i; a++)
		{
			k = k*a;
		}
		sum = sum + k;
	}
	return sum;
}