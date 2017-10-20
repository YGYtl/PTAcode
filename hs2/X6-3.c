int factorsum( int number )
{
	int i, k, sum;
	sum = 0;
	for(i=1; i<number; i++)
	{
		if(number%i == 0)
		{
			sum = sum + i;
		}
	}
	if(1 == number)
	{
		return 1;
	}
	else{
		return sum;
	}
}

void PrintPN( int m, int n )
{
	int i, c, k;
	k = 1;
	for(i=m; i<=n; i++)
	{
		if(factorsum(i) == i)
		{
			printf("%d = 1", i);
			for(c=2; c<i; c++)
			{
				if(i%c ==0)
				{
					printf(" + %d", c);
				}
			}
			printf("\n");
			k = 2;
		}
	}
	if(k==1)
	{
		printf("No perfect number\n");
	}
}
