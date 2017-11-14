void printdigits( int n )
{
	int k, m, j, a;
	m = 1, k = n, j = 0, a = 0;
	while(k!=0)
	{
		k = k/10;
		if(k>0)
		{
			m = m*10;
		}
		a++;
	}
	while(a>0)
	{
		k = 1;
		a--;
		j = n/m;
		printf("%d\n", j);
		n = n%m;
		m = m/10;
	}
	if(k==0)
	{
		printf("%d", 0);
	}
}