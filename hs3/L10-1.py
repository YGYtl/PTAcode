int sum( int n )
{
	int s;
	if(n==0||n<0)
	{
		s = 0;
	}
	else{
		s = n+sum(n-1);
	}
	return s;
 }