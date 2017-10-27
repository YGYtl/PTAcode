int prime( int p )
{
	int a, i;
	a = 1;
	if(p==1)
	{
		a = 0;
	}
	for(i=2; i<p; i++)
	{
		if(p%2==0)
		{
			a = 0;
			break;
		}
		else{
			if(p%i==0)
				a = 0;
		}
	}
	return a;
}
void Goldbach( int n )
{
	int i, k;
	if(n%2!=0)
	{
		n = n + 1;
	}
	for(i=2; i<n; i++)
	{
		if(prime(i)==1)
		{
			k = n-i;
			if(prime(k)==1)
			{
				printf("%d=%d+%d", n, i, k);
				break;
			}
		}
	}
}
