int ArrayShift( int a[], int n, int m )
{
	int s[MAXN] = {0};
	int i, k;
	if(m >= n)
	{
	    m = m-n;
	}
	for(i=0; i<n; i++)
  	{
    	k = i+m;
	    if(k >= n)
	    {
	        k = k-n;
	    }
	    s[k] = a[i];
	}
	for(i=0; i<n; i++)
	{
		a[i] = s[i];
	}
}