void CountOff( int n, int m, int out[] )
{
	int i, j, k, z, a[MAXN];//i(0~10)
	j = 0;//j(1~11)
	k = 0;//k(0~3)
	z = 0;
	for(i=0; i<n; i++)
	{
		a[i] = i+1;
	}
	i=0;
	while(z<n)
	{
		if(a[i]!=0)
		{
			k++;
		}
		if(k==m)
		{
			j++;
			out[i]=j;
			k=0;
			z++;
			a[i]=0;
		}
		i++;
		if(i==n)
		{
			i=0;
		}
	}
	
}