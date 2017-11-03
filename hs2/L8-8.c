void Shift( char s[] )
{
	int i;
	int n;
	char a[3];
	n = strlen(s);
	for(i=0; i<3; i++)
	{
		a[i] = s[i];
	}
	if(n > 3)
	{
		for(i=3; i<n; i++)
		{
			s[i-3] = s[i];
		}
	}
	for(i=0; i<3; i++)
	{
		s[n-3+i] = a[i];
	}
	return s;
}