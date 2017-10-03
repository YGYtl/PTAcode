int narcissistic( int number )
{
	int sum = 0, count = 0;
	int a, c, b;
	a = number;
	c = number;
	while(a != 0)
	{
		a /= 10;
		count++;
	}
	int k = 1, i = 0;
	while(number != 0)
	{
		k = number%10;
		b = k;
		i = count;
		while(i != 1)
		{
			k = k *b;
			i--;
		}
		sum = sum + k;
		number = number / 10;
	}
	if(sum == c)
	{
		return 1;
	}
	else{
		return 0;
	}
}
void PrintN( int m, int n )
{
	int i, k;
	for(i = m+1; i<n; i++)
	{
		if(narcissistic(i) == 1)
		{
			k = printf("%d\n", i);
		}
	}
	return k;
}
