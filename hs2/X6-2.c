int fn( int a, int n )
{
	int i = 0, k, sum = 0;
	while(n != 0)
	{
		sum = sum + a;
		a = a*10;
		n--;
	}
	return sum;
	
}
int SumA( int a, int n )
{
	int k = fn(a,n);
	int S = 0; 
	while(k != 0)
	{
		S = S + k;
		k = k/10;
	}
	return S;
}
