int search( int n )
{
	int count, k, i, m;
	int a, b, c;
	count = 0;
	if(n==101||n<101)
	{
		count = 0;
	}
	else{
		a = 0, b = 0, c = 0, i = 0, m=n;
		a = m%10;
		m = m/10;
		b = m%10;
		m = m/10;
		c = m;
		for(i=11; i<31; i++)
		{
			if(n==pow(i,2)&&(a==b||a==c||b==c))
			{
				count++;
			}
		}
		count = count + search(n-1);
	}
	return count;
}